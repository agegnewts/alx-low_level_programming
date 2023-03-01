#include "main.h"
#include <stdio.h>
/**
 * _strncat-concatenates two strings
 *
 * @dest: destinaltion string
 * @src: source string
 * @n: describes the number of strings to copy
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int lengthd;
	/* int lengths; not needed  */
	int i;

	lengthd  = 0;
	i = 0;
	while (dest[lengthd])
	{
		lengthd++;
	}
	/*lengthd--;*/
	/* lengthd = sizeof(dest);*/
	/* lengths = sizeof(src);*/
	/*for (i = 0; i < n && src[n] != '\0';  i++)*/
	/*{*/
	/*	dest[lengthd + i] = src[i];*/
	/*	printf("dest value %s %s\n", dest, src);*/
	/*}*/
	while (src[i] != '\0' && n > i)
	{
		dest[lengthd] = src[i];
		lengthd++;
		i++;
	}
	dest[lengthd + i] = '\0';
	return (dest);
}
