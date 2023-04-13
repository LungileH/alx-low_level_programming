#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - ...
 * @ptr: ...
 * @old_size: ...
 * @new_size: ...
 *
 * Return: ...
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ntpr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ntpr = malloc(new_size);

		if (ntpr == NULL)
			return (NULL);
		return (ntpr);
	}
	else
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
{
	ntpr = malloc(new_size);

	if (ntpr ==  NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++);
}
	ntpr[i] = ((char *) ptr)[i];

free(ptr);
return (ntpr);
}
