 #include "main.h"
 /**
  * rev_sgtring - returns the reverse of s
  *
  * Return: reverse string
  */
void rev_string(char *s)
{
	int length;
	int J;

	length = _strlen(s);

	for (J = length - 1; J > 0; J--)
	{
		_putchar(s[J]);

	}
}
