#include "main.h"
/**
 * print_last_digit - prints the last digit of any given number
 * @n: the value to be printed
 * Return: value of las_num
 */
int print_last_digit(int)
{
	int las_num = n % 10;

	if (las_num < 0)
	{
		las_num = -las_num;
	}
	printf("%d", las_num);
	return (las_num);
}
