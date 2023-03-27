#include "main.h"
/**
  * print_array - fuction prints n elements
  * @a: name of array
  * @n: array number of elements
  * Return: a and n inputs
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if
		(i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
	printf("\n");
}
