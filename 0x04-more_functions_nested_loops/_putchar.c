#include "main.h"
#include <unistd.h>
/**
  * _putchar - prints c to out put
  * @c: The charaacter to be printed
  *
  * Return: 1
  * on error. -1 is returned
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
