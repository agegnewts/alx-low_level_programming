#include <stdio.h>
/**
 *  main - Entry point
 *
 *  character string called name is called to hold the string for printing
 *
 *  puts function will take the string argument name to print it
 *
 *  return will return 0 for proper exectuion
 *
 *  Return: Always 0 (success)
 */
int main(void)
{
	char  size_char;
	int  size_int;
	long int  long_size_int;
	long long int  llong_size_int;
	float size_float;

	printf("size of a char: %zu byte(s)\n", sizeof(size_char));
	printf("size of an int: %zu byte(s)\n", sizeof(size_int));
	printf("size of a long int: %zu byte(s)\n", sizeof(long_size_int));
	printf("size of a long long int: %zu byte(s)\n", sizeof(llong_size_int));
	printf("size of a float: %zu byte(s)\n", sizeof(size_float));
	return (0);
}

