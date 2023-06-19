#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: pointer to a string
 * @age: float
 * @owner: pointer to a string
 *
 * Return: pointer to struct dog, NULL for fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t new;
	dog_t *newdog;
	char *nme;
	char *own;

	newdog = &new;
	nme = name;
	own = owner;
	newdog->name = nme;
	newdog->age = age;
	newdog->owner = own;
	return (newdog);
}
