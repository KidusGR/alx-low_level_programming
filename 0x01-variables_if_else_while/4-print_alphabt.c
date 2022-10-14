#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: prints the alphabet in lowercase except e and q
 * Return: 0
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
		{
			ch++;
		}
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}

