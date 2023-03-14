#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *cx;
	unsigned int z;

	if (size == 0)
		return (NULL);

	cx = malloc(sizeof(c) * size);

	if (cx == NULL)
		return (NULL);

	for (z = 0; z < size; z++)
		cx[z] = c;

	return (cx);
}
