#include <stdio.h>

/**
 * main - main function
 *
 *Return: always 0
 */

int main(void)
{
	int i;
	int sum;

	sum = 0;

	for (i = 0 ; i < 10 ; i++)
	{
		if ((1 % 3 == 0) || (1 % 5 == 0))
		{
			sum = sum + i;
		}
	}
	printf("%d \n", sum);
	return (0);
}
