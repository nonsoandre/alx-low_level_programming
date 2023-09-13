#include "main.h"
/**
 * _islower - checks for lower character case
 * @c: The character value to check
 *
 * Return: 1 if character is lowercase, 0 if Uppercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
