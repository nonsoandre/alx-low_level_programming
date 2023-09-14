#include "main.h"

/**
 * print_diagonal -  prints a diagonal line on the terminal
 * @a: value that olds the number pf times character is printed
 */

void print_diagonal(int a)
{
	if (a <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int b, c;

		for (b = 0; b < a; b++)
		{
			for (c = 0; c < a; c++)
			{
				if (c == i)
					_putchar('\\');
				else if (c < b)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
