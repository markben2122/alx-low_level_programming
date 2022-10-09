#include "main.h"
#include <limits.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of bytes to be allocated
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
