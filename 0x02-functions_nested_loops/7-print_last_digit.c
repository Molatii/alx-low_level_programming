#include "main.h"
/**
 * print_last_digit - check the code
 * Description: 'Prints the last number'
 * @n: number is int
 * Return: lst number/digit.
 */
int print_last_digit(int n)
{
	int l;

	l = n & 10;
	if (l < 8)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
