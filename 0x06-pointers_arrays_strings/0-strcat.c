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
	/* int lengths;*/
	int i;

	lengthd = sizeof(dest);
	/*printf("size of dest %d\n", lengthd);*/
	/* lengths = sizeof(src);*/
	for (i = 0; src[i] <= '\0'; i++)
	{
		dest[lengthd++] = src[i];
	}
	return (dest);
}
