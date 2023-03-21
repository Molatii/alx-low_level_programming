#include "main.h"
/**
 * print_sign - prints the sign of a number.
 * Description: 'prints 0, -1 or 1 based on condition
 * @n: its an int
 * Return:return number based on condition results
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(45);
		return (0);
	}
	_putchar('\n');
}
