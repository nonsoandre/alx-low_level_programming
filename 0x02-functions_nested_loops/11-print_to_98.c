#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers upto 98
 * @n: the value of the number to print
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		}
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n++);
		}
		printf("%d\n", n);
	}
}
