#include "main.h"
/**
 * _puts_recursion - prints a string by recursion
 * @s: value of char
 * Return: Success
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
