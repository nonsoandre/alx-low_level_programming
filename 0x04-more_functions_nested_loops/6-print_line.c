#include "main.h"

/**
 * print_line - program that draws a straight line in the terminal
 * @a: value of the number of lines to print
 */
void print_line(int a)
{
	if (a <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int b;

		for (b = 1; b <= a; b++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
