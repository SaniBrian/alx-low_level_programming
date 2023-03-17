#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
int i;
long int a;
long long int b;
float f;

printf("Size of a char: %lu", (unsigned long) sizeof(c));
printf(" bytes(s)\n");
printf("Size of an int: %d", (unsigned int)sizeof(i));
printf(" bytes(s)\n");
printf("Size of a long int: %lu", sizeof(a));
printf(" bytes(s)\n");
printf("Size of a long long int: %llu", (unsigned long long int)sizeof(b));
printf(" bytes(s)\n");
printf("Size of a float: %lu", (unsigned long) sizeof(f));
printf(" bytes(s)\n");
return (0);
}
