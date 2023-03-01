#include "main.h"
/**
 * _strcmp - comparing the value of two strings
 * @s1: first string
 * @s2: second string
 * Return: negative  if s1 < s2, 0 if equal and positive if s1 < s2
 * i
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	/*int value;*/
	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)

	{
		if (*s1 == *s2)
		{
			return (0);
		}
		else
		{
			break;
		};
	}
	return (*s1 - *s2);
}
