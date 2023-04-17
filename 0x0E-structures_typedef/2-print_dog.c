#include <stdio.h>
#include "dog.h"
/**
 *print_dog - prints a struct dog
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else if (d->name == NULL)
	{
		printf("Name: %s", "(nil)\n");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s", d->owner);
	}
	else if (d->owner == NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s", "(nil)\n");
	}
	else if (d->name == NULL && d->owner == NULL)
	{
		printf("Name: %s", "(nil)\n");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s", "(nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
