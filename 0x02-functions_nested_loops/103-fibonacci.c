#include <stdio.h>
/**
 * main - sum of fibonacci even-numbers under 4,000,000
 * Return: Always 0
 */
int main(void)
{
	int count;
	long fib1 = 0, fib2 = 1, sumtotal, sumeven = 0;

	for (count = 0; count < 4000000; count++)
	{
		sumtotal = fib1 + fib2;
		if (sumtotal % 2 == 0)
		{
			sumeven += sumtotal;
		}

		fib1 = fib2;
		fib2 = sumtotal;
	}
	printf("%lu\n", sumeven);

	return (0);
}
