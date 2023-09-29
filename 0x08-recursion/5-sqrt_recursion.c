#include "main.h"
/**
* natural_sqrt - calculate natural square root of a number.
* @n: value to check
* @i: iterator
* Return: 1 if n is prime, 0 if not
*/
int natural_sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (natural_sqrt(n, i + 1));
}
/**
* _sqrt_recursion - calculate natural square root of a number.
* @n: value to square
* Return: 1 if n is prime, 0 if not
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (natural_sqrt(n, 1));
}
