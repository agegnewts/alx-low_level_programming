#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int inicount = 0;
	int secondcount;

	while (*s != '\0')
	{
		inicount++;
		s++;
	}
	s--;
	for (secondcount = inicount; secondcount > 0;  secondcount--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
