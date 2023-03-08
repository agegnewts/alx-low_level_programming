#include "main.h"
/**
 * _puts_recursion - prints individual letters
 * @s: pointer to the input string
 * Return: void returns nothing
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
