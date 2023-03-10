#include "main.h"
#include <stdio.h>
/**
 * _strcat-concatenates two strings
 *
 * @dest: destinaltion string
 * @src: source string
 * Return: void
*/

char *_strcat(char *dest, char *src)
{
	int lengthd;
	int i;

	lengthd = 0;
	while (dest[lengthd])
	{
		lengthd++;
	}

	for (i = 0; src[i]; i++)
	{
		dest[lengthd++] = src[i];
	}
	return (dest);
}
