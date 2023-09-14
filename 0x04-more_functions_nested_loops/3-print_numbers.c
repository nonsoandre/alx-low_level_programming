#include "main.h"
#include <stdio.h>
/**
  * print_numbers - prints numbers from 0-9
  * Return: nothing
  */
void print_numbers(void)
{
	int a = 0;

	while (a < 10)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}

