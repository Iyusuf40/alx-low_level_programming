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
	int len_name = 0, len_owner = 0, i = 0;
	char *n_name, *n_owner;
	dog_t *n_dog;

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == 0)
		return (0);
	while (name[len_name] != 0)
		len_name++;
	while (name[len_owner] != 0)
		len_owner++;
	n_name = malloc(len_name * sizeof(char));
	if (n_name == 0)
	{
		free(n_dog);
		return (0);
	}
	n_owner = malloc(len_owner * sizeof(char));
	if (n_owner == 0)
	{
		free(n_dog);
		free(n_name);
		return (0);
	}
	for (i = 0; i < len_name; i++)
		n_name[i] = name[i];
	for (i = 0; i < len_owner; i++)
		n_owner[i] = owner[i];
	(*n_dog).name = n_name;
	(*n_dog).age = age;
	(*n_dog).owner = n_owner;
	return (n_dog);
}
