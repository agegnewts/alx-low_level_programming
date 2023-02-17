#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints the last digit of a random generated number
 *
 * checking to see if it is greater than 5, less than 6 or 0
 *
 * Return: Always 0 (success)
 */
int main(void)
{

	int n, lastD;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	lastD = n % 10;
	if (lastD > 5)
	{
	printf("Last digit of %i is  is greater than 5\n", n, lastD);
	}
	else if (lastD < 6 && lastD != 0)
	}
	printf("Last digit of %i is less than 6 and not 0\n", n, lastD);
	}
	else if (lastD == 0)
	{
		printf("Last digit of %i and is 0\n", n, lastD);

	}
	return (0);
}
