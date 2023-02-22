#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function for natural numbers
 *
 * @n: function parameters
 *
 * Return: always 0
 */

void print_to_98(int n)
{
	int i;

	if (n >= 0 && n <= 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%d", i);
<<<<<<< HEAD
			if (i != 98)
				printf(", ");
=======
>>>>>>> 2b1d6449e016efdf9caf37d96564d5e8ef958cfb
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for  (i = n ; i >= 98 ; i--)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n == 98)
		printf("%d", n);
}
