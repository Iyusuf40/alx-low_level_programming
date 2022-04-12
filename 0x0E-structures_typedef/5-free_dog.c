#include <stdlib.h>
/**
 * free_dog- frees previously allocated memory
 * @d: memory to free
 */
void free_dog(dog_t *d)
{
	free(d);
}
