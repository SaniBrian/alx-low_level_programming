#include <stdio.h>
/**
 *main - prints the number of arguments passed to it
 *@argc: argumeny count
 *@argv: argument vector
 *Return: always 0 on success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}
