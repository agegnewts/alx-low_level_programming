#include "main.h"
/**
 * leet - changes to 1337
 * @n: input string.
 * Return: the pointer to dest.
 */


char *leet(char *n)
{
	int i;
	int j;

	char sA[] = "aAeEoOtTlL";
	char sB[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == sA[j])
			{
				n[i] = sB[j];
			}
		}
	}
	return (n);
}
