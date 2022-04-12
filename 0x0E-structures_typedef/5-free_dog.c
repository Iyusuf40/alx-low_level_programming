#include <stdlib.h>
#include "dog.h"
/**
 * free_dog- frees previously allocated memory
 * @d: memory to free
 */
void free_dog(dog_t *d)
{
	if (d == 0)
		return;
	if ((*d).name != 0)
		free((*d).name);
	if ((*d).owner != 0)
		free((*d).owner);
	if (d != 0)
		free(d);
}
