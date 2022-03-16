#include <unistd.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the last digit of the number
 * Return: returns the value of the last digit
 */
int print_last_digit(int n)
{
	int r = n % 10;

	if (r < 0)
	{
		int q = -1 * r;

		_putchar(q + '0');
		return (q);
	}
	return (0);
}
