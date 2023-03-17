#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  *main - entry point
  *Discription: 'Print alphabets in lowercase and uppercase'
  *Return: always 0
  */
int main(void)
{
	int i = 97;
	int x = 65;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	while (x <= 90)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
