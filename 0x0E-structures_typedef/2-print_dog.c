#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - print struct dog
 * @d: pointer to struct dog
 *
 * Description: if an element of d is null print (nil),
 * if d is null print nothing
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		printf("Name: (nil)");
		printf("\n");
	}
	else
	{
		printf("Name: %s", d->name);
		printf("\n");
	}
	printf("Age: %f", d->age);
	printf("\n");
	if (d->owner == NULL)
	{
		printf("Owner: (nil)");
		printf("\n");
	}
	else
	{
		printf("Owner: %s", d->owner);
		printf("\n");
	}
	if (d == NULL)
	{
		;
	}
}
