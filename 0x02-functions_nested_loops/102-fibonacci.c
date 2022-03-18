#include <stdio.h>
/**
 * main - prints the first 50 fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
	int count;
	long fib1 = 1, fib2 = 2, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;

		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
