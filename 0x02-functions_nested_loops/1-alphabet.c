#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - prints the alphabets in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
	char alp;
	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');
}
