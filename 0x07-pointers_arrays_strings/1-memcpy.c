#include <stdio.h>

/**
 * _memcpy - copys n bytes from src to dest
 * @dest: destination of copied bytes
 * @src: sources of bytes to be copied
 * @n: number of bytes to be copied
 *
 * Return: returns dest to the function pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	x = 0;
	while (x < n)
	{
		*(dest + x) = *(src + x);
		x++;
	}
	return (dest);
}
