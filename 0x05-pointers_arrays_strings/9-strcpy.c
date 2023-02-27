#include "main.h"

/**
 * *_strcpy - copy strg to another string
 * @dest: pointer
 * @src: poiter
 * Return: numbers dest
 */

char *_strcpy(char *dest, char *src)
{
	int z;

	for (z = 0; src[z] != '\0'; z++)
	{
		dest[z] = src[z];
	}
	dest[z] = '\0';
	return (dest);
}
