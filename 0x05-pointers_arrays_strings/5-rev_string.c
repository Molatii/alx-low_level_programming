#include "main.h"
/**
  * rev_string - reverses a given string
  * @s: input string
  * Return: reversed str
  */
void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\n')
		counter++;
	for (i = 0; i < vounter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
