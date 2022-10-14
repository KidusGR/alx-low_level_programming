#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: prints if a number is greater than 5, zero or less than 6 and not 0
 * Return: 0
 */

int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	if (digit > 5)
	{
	printf("%d and is greater than 5", digit);
	}
	else if (digit == 0)
	{
	printf("%d and is 0", digit);
	}
	else if (digit < 6 || digit != 0)
	{
	printf("%d and is less than 6 and not 0", digit);
	}
	return (0);
}

