#include "main.h"
/**
 * _strlen - returns the lenght of the string
 *
 * @s: is the string
 * Return: length
 */

int _strlen(char *s)
{

	int counter;


	for (counter = 0; *s != '\0'; counter++)
	{
	s++;
	continue;
	}
	return (counter);
}
