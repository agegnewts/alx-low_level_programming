#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a : matrix array
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int x, y;

	i = 0;
	j = 0;
	x = 0;
	y = 0;
	while (i < size)
	{
		x += *(a + ((i * size) + i));
		i++;
	}
	i -= 1;
	while (j < size)
	{
		y += *(a + ((j * size) + i));
		j++;
		i--;
	}
	printf("%d, %d\n", x, y);
}
