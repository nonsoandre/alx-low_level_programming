#include "main.h"
/**
 * print_sign - checks for the sign of a number
 * @n: the value to check for
 * Return: 1 if positive, Return 0 if value is 0, -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
