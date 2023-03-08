#include "main.h"

/**
 * _strlen_recursion - size
 * @s: pointer to string params
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int x;

	x = 0;
	if (*s)
	{
		x++;
		x = x + (_strlen_recursion(s + 1));
	}
	return(x);
}
