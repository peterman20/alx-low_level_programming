#include <unistd.h>
#include <ctype.h>
#include "main.h"
/**
 * _isalpha - checks for an alphabetic character
 * @c: the character to be checked
 * Return: returns 1 if the character is alphabet
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
