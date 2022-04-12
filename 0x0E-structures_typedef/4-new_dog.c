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
	int len_name = 0, len_owner = 0, i = 0, j = 0;
	dog_t *n_dog;

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == 0)
		return (0);
	while (name[len_name] != 0)
		len_name++;
	while (owner[len_owner] != 0)
		len_owner++;
	(*n_dog).name = malloc((len_name + 1) * sizeof(char));
	if ((*n_dog).name == 0)
	{
		free(n_dog);
		return (0);
	}
	(*n_dog).owner = malloc((len_owner + 1) * sizeof(char));
	if ((*n_dog).owner == 0)
	{
		free(n_dog);
		free((*n_dog).name);
		return (0);
	}
	for (i = 0; i < len_name; i++)
		(*n_dog).name[i] = name[i];
	(*n_dog).name[i] = 0;
	for (j = 0; j < len_owner; j++)
		(*n_dog).owner[j] = owner[j];
	(*n_dog).owner[j] = 0;
	(*n_dog).age = age;
	return (n_dog);
}
