#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * new_dog- creates a new struct dog
 * @name: first property
 * @age: second property
 * @owner: third property
 * Return: a pointer to the new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == 0)
		return (0);
	(*n_dog).name = name;
	(*n_dog).age = age;
	(*n_dog).owner = owner;
	return (n_dog);
}
