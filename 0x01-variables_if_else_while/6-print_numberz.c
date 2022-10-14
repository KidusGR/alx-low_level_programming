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
	long int n = 9876543210;
	int i = 0;

	while (i < 10)
	{
		putchar((n%10) + '0');
		n = n/10;
		i++;
	}
	putchar('\n');
	return (0);
}

