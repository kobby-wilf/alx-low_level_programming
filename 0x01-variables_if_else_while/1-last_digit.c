#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * more headers goes there
 *
 * betty style doc for function main goes there
 *
 */

	int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
	{
		printf("%d Last digit of n is 0\n", n);
	}
	else if (n <= 5 && n != 0)
	{
		printf("%d Last digit of n is less than 6 and not 0\n", n);
	}
	else
	{
		printf("%d Last digit of n is greater than 5\n", n);
	}
	return (0);

}

