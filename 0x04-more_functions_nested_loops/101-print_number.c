#include <stdio.h>
#include "main.h"
/**
  * print_number - prints integers
  * @n - value to be printed
  */
int print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	else
	{
		num = n;
	}
	if (n / 10)
	{
		_putchar(num / 10);
	}
	_putchar((num % 10) + '0');
}
