#include "main.h"
/**
 * _isalpha - checks for uppercase letters
 * @c: The character value to check
 *
 * Return: 1 if character is Uppercase, 0 if Uppercase
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
