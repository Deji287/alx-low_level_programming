#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * To store and display random numbers
 *
 * return: 0 on success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
		printf("%d is %s\n", n, "negative");
	else if (n > 0)
		printf("%d is %s\n", n, "positive");
	else
		printf("%d is %s\n", n, "zero");

	return (0);
}
