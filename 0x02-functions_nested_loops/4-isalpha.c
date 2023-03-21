#include "main.h"
/**
 * _isalpha -  checks for alphabetic character.
 * Description: 'print 1 if input is a letter or just 0'
 *@c: ASCII character
 * Return: Always 1 for letter or 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 98))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
