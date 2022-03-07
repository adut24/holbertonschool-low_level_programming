#include "dog.h"
#include <stdlib.h>
/**
 * @brief
 *
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
