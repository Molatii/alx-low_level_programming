#include "main.h"
/**
 * _islower - checks for lowercase character.
 * Description: 'print 0 or 1 based on fuction check'
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
	return (0);
	}
	_putchar('\n');
}
