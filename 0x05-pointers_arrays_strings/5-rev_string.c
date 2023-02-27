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
	char *rev;
	char *org;
	char ch;


	length = _strlen(s);
	org = s;
	rev = s + (length - 1);
	for (J = 0; J < (length - 1); J++)
	{
		ch = *rev;
		*rev = *org;
		*org = ch;
		rev--;
		org++;

	}
}
