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
	int diff;

	i = 0;
	diff = 0;

	/*int value;*/
	while (diff == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))

		break;

		diff = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (diff);
}
