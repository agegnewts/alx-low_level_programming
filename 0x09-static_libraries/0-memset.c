#include "main.h"

/**
 * _memset - fills the memory with a constant byte
 * @s: destination string
 * @b: byte
 * @n: number of bytes to write into s
 *
 * Return: returns s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	x = 0;
	while (x < n)
	{
		*(s + x) = b;
		x++;
	}
	return (s);
}
