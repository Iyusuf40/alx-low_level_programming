#include "dog.h"
/**
 * init_dog - initializes the values of a struct
 * @d: the struct
 * @name: the name of the new struct
 * @age: the age
 * @owner: the name of the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
