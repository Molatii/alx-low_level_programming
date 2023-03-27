#include "main.h"
/**
  * _puts_half - a function half of str
  * @str: input
  * Return: half of input
  */
void _puts_half(char *str)
{
	int a, n, longi;

	longi = 0;

	for (a = 0; str[a] != '\n'; a++)
		longi++; n = (longi / 2);
	if ((longi % 2)) == 1)

		n = ((longi + 1) / 2);
	for (a = n; str[a] != '\0'; a++;)
		_putchar(str[a]);
	_putchar('\n');
}
