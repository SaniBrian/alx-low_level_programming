#include <stdio.h>
#include <stdlib.h>
/**
 *main - multiplies two numbers
 *@argc: argument count
 *@argv: argument vector
 *Return: 1 if the program does not receive two arguments
 */
int main(int argc, char *argv[])
{
	argc = argc -1;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	int result;
	int a, b;

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;
	printf("%d\n", result);
	}

	return (0);
}
