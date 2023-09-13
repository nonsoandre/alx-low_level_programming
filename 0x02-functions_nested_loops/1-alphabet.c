#include <stdio.h>
#include "main.h"
/**
 * main - Entry
 * Return: Always 0
 */

void print_alphabet(void)
{
	/** prnt in all small cases */
	int a;

	for (a = 'a'; a <= 'z'; ++a)
	{
		_putchar(a);
	}
	_putchar('\n');
}
