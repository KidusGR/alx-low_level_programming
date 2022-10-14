#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: prints numbers from 0 to 9
 * Return: 0
 */

int main(void)
{
	long long int n = 9876543210;

	for (int i = 0; i < 10; i++)
	{
		putchar((n%10) + '0');
		n = n/10;
	}
	putchar('\n');
	return (0);
}

