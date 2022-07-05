#include <stdio.h>

/**
*main - Lists all the natural numbers below 1024 (excluded)
*that are multiple of 3 and 5.
*
*Return: Always 0.
*/
int main(void)
{
	int i, sum;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += 1;
	}
	printf("%d\n", sum);

	return (0);
}

