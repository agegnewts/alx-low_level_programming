#include "main.h"

/**
 * _puts - returns the print out of the string and a new line
 *
 * @str: String imported to be printed.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
