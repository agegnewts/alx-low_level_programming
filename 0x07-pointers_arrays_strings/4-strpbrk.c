#include "main.h"

/**
 * _strpbrk - searches and returns amount of similar letters
 *
 * @s: pointer of string passed to the function
 * @accept: used as the similar letters 
 *
 * Return: returns a pointer to the byte s if there is a match else
 * return NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (1)
	{
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
			j++;
		}
		if (*(s + i) == '\0')
			return (0);
		i++;
	}
}
