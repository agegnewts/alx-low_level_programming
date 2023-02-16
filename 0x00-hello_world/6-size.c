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


	printf("Size of a char: %zu byte(s)\n", sizeof(char));

	printf("Size of an int: %zu byte(s)\n", sizeof(int));

	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));

	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));

	printf("Size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}

