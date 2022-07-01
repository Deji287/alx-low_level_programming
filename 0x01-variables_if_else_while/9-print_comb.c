#include <stdio.h>
/**
 * main - Entry point
 *
 * prints all combinations of single-digit numbers.
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
