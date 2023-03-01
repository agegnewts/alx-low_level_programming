#include "main.h"
/**
 * reverse_array - content of an array will be reversed
 *
 * @a: pointer to int array
 * @n: is the number of elements to be reversed
 *
 * Return: void due to pointer use
*/

void reverse_array(int *a, int n)
{
	int tpp;
	int x;
	int y;

	x = 0;
	y = n - 1;

	while (x < y)
	{
		tpp = a[x];
		a[x] = a[y];
		a[y] = tpp;
		x++;
		y--;
	}
}
