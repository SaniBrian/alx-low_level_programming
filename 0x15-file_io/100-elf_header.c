#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
*check_elf - Checks for ELF file
*@_ident: array of ELF magic numbers
*Return: void
*/
void check_elf(unsigned char *_ident)
{
	int idx;

	for (idx = 0; idx < 4; idx++)
	{
		if (_ident[idx] != 127 &&
		    _ident[idx] != 'E' &&
		    _ident[idx] != 'L' &&
		    _ident[idx] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
*print_magic - Prints magic numbers of ELF header
*@_ident: array of ELF magic numbers
*Return: void
*/
void print_magic(unsigned char *_ident)
{
	int idx;

	printf("  Magic:   ");
	for (idx = 0; idx < EI_NIDENT; idx++)
	{
		printf("%02x", _ident[idx]);

		if (idx == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
*print_class - Prints ELF header class
*@_ident: array of ELF class
*Return: void
*/
void print_class(unsigned char *_ident)
{
	printf("  Class:                             ");
	switch (_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", _ident[EI_CLASS]);
	}
}

/**
*print_data - Prints ELF header data
*@_ident: array of ELF class
*Return: void
*/
void print_data(unsigned char *_ident)
{
	printf("  Data:                              ");
	switch (_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", _ident[EI_CLASS]);
	}
}

/**
*print_version - Prints ELF header version
*@_ident: array of ELF version
*Return: void
*/
void print_version(unsigned char *_ident)
{
	printf("  Version:                           %d", _ident[EI_VERSION]);
	switch (_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
*print_osabi - Prints ELF header OS/ABI
*@_ident: array of ELF version
*Return: void
*/
void print_osabi(unsigned char *_ident)
{
	printf("  OS/ABI:                            ");
	switch (_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", _ident[EI_OSABI]);
	}
}

/**
*print_abi - Prints ELF header ABI version
*@_ident: array of ELF ABI version
*Return: void
*/
void print_abi(unsigned char *_ident)
{
	printf("  ABI Version:                       %d\n", _ident[EI_ABIVERSION]);
}

/**
*print_type - Prints ELF header type
*@_type: ELF type
*@_ident: array of ELF class
*Return: void
*/
void print_type(unsigned int _type, unsigned char *_ident)
{
	if (_ident[EI_DATA] == ELFDATA2MSB)
		_type >>= 8;
	printf("  Type:                              ");
	switch (_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", _type);
	}
}

/**
*print_entry - Prints entry point of an ELF header.
*@_entry: ELF entry point
*@_ident: array of ELF class
*Return: void
*/
void print_entry(unsigned long int _entry, unsigned char *_ident)
{
	printf("  Entry point address:               ");
	if (_ident[EI_DATA] == ELFDATA2MSB)
	{
		_entry = ((_entry << 8) & 0xFF00FF00) |
			  ((_entry >> 8) & 0xFF00FF);
		_entry = (_entry << 16) | (_entry >> 16);
	}
	if (_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)_entry);
	else
		printf("%#lx\n", _entry);
}

/**
*close_elf - exit file.
*@_file: file descriptor
*Return: void
*/
void close_elf(int _file)
{
	if (close(_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", _file);
		exit(98);
	}
}

/**
*main - Entry point
*@argc: arguments count
*@argv: List of arguments
*Return: 0 on success or 98 on failure.
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int sys, rread;

	sys = open(argv[1], O_RDONLY);
	if (sys == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(sys);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	rread = read(sys, header, sizeof(Elf64_Ehdr));
	if (rread == -1)
	{
		free(header);
		close_elf(sys);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	check_elf(header->e_ident);
	printf("ELF Header:\n");
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_osabi(header->e_ident);
	print_abi(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entry(header->e_entry, header->e_ident);
	free(header);
	close_elf(sys);
	return (0);
}
