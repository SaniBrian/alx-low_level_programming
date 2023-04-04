#include "main.h"

/**
 *_mempy - copies memory area
 *@dest: memory area destinstion
 *@src: memory area source
 *@n: bytes from memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;
	j = 0;

	while (j < n)
	{
		*(dest + j) =  *(src + j);
		j++;
	}

	return (dest);
}
