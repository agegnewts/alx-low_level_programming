#include "main.h"
/**
 * print_alphabet_x10 - 10 Alphabets
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char X = 'a';

	int c = 0;

	while (c < 10)
	{
		for (X = 'a'; X <= 'z'; X++)
		{
			_putchar(X);
		}
		_putchar('\n');
		c = c + 1;
	}
}
