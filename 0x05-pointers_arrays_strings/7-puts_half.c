#include "main.h"
/**
 * puts_half - print second half of a string
 * @str: The char array
 * Return: nothing or void
 */
void puts_half(char *str)
{
	int strl = 0;
	int i;

	while (str[strl] != '\0')
	{
		strl++;
	}

	int begin;
	if (strl % 2 == 0)
	{
		begin = strl / 2;
	}
	else
	{
		begin = (strl - 1) / 2;
	}
	for (i = begin; i < strl; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
