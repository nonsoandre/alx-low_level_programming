#include <stdio.h>
#include <main.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	/** prnt in all small cases */
	int c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		_putchar(c);
	}
	_putchar('\n');
}
