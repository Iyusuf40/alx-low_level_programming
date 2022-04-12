#include <stdlib.h>
#include "dog.h"
/**
 * free_dog- frees previously allocated memory
 * @d: memory to free
 */
void free_dog(dog_t *d)
{
	if (d != 0)
		free(d);
}
