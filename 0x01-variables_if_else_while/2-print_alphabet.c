#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  *main - entry point
  *Discription: 'Print alphabets in lowercase'
  *Return: always 0
  */
int main(void)
{
	int i = 97;

	for (i; i <= 122; ++i)
	{
	   putchar(i);
	}
	putchar('\n');
	return (0);
}
