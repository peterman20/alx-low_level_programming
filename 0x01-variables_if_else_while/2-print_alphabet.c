#include <stdio.h>
/**
 * main - main block
 * Description: use putchar function to print alphabets in lowercase
 * Return: 0
 */
int main(void)
{
	char ch;

	for(ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
