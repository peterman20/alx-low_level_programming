#include <stdio.h>
/**
 * main - main block
 * Description: prints all th numbers of base16 in lowercase
 * Return: 0
 */
int main(void)
{
	int i;
	char ch;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (ch = 'a'; ch < 'g'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
