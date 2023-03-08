#include "main.h"

/**
 * _print_rev_recursion - reverse
 * @s: pointer to string params
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{

		_putchar(*s);
		_print_rev_recursion(s + 1)

	}
}
