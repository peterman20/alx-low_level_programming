#include <stdio.h>
/**
 * main - prints first 98 fibonacci series
 * Return: Always 0
 */
int main(void)
{
	int i, num1 = 0, num2 = 1, sum;

	for (i = 1; i <= 98; i++)
	{
		if (i == 98)
		{
			printf("%d, ", num2);
		}
		else
		{
		printf("%d, ", num2);
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
		}
	}
	printf("\n");

	return (0);
}
