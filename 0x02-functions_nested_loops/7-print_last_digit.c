#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of any given number
 * @n: the value to be printed
 * Return: value of las_num
 */
int print_last_digit(int n)
{
	int las_num = n % 10;

	if (las_num < 0)
	{
		las_num = -las_num;
	}
	_putchar(las_num + '0');
	return (las_num);
}
