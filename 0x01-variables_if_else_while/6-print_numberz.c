#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  *main - entry point
  *Discription: 'Single digit numbers of base 10 starting from 0 of type char'
  *Return: always 0
  */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + 48);
	}
	putchar('\n');
	return (0);
}
