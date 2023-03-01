#include "main.h"
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
	/* lengths = sizeof(src);*/
	for (i = 0; i <= '\0'; i++)
	{
		dest[lengthd + i] = src[i];
	}
	return (dest);
}
