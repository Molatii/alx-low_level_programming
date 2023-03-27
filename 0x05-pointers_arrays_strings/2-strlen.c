#include "main.h"
/**
  * _strlen - function returns the lenght pof str
  * Description: 'get str lemght'
  * @s: string lenght
  * Return: longi
  */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
