#include "main.h"
/**
 * _strncpy -  returns the copied string
 * @dest: string that gets a copy
 * @src: string that will be copied
 * @n:  the number of strings that will be copied
*/


char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	/*for (; i < n; i++)*/
	/*{*/
	/*	dest[i] = '\0';*/
	/*}*/
	while (i < n)
	{
	dest[i] = '\0';
	i++;
	}
	return (dest);
}
