#include "main.h"
/**
 * _memset - fill a memory block with one value
 * @s: the memory area
 * @b: the value
 * @n: number of bytes to be changed
 * Return: the new array
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
