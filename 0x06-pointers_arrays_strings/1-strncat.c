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
	/* int x;*/

	/*x = 3;*/ 	

	lengthd = sizeof(dest);
	/* lengths = sizeof(src);*/
	for (i = 0; i <= n && src[n] != '\0';  i++)
	{	
		dest[lengthd + i] = src[i];
		printf("dest value %s %s\n", dest, src);
	}
	return (dest);
}
