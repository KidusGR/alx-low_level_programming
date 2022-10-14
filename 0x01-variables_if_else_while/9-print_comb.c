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
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
		continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

