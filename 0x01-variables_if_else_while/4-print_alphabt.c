#include <stdio.h>
/**
 * main - main block
 * Description: prints alphahbets except q and e
 * Return: 0
 */
int main(void)
{
	int l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l != 'e' && l != 'q')
			putchar(l);
	}
	putchar('\n');
	return (0);
}
