#include "main.h"

/**
 * print_chessboard - prints the chessboard on the terminal
 * @a: pointer to bi dimensional array
 *
 * Return: no return value(void)
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	while (1)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		i++;
		if (j == 8)
			_putchar('\n');
		if (a[i][j] == '\0')
			break;
	}
}
