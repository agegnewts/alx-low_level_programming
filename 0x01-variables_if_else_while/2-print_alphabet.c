#include <stdio.h>
#include <string.h>
/*
 * main - Prints lower case alphabets from character "a" to "z"
 * Return: Always 0 (success)
*/

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

