#include "dog.h"
/**
 * free_dog - frees memory allocated to structure dog
 * @d: pointer pointing to memory location
 */
void free_dog(dog_t *d)
{
	free(d);
}
