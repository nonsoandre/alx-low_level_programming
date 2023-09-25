#include "main.h"
/**
 * _strspn - Entry point
 * @s: input value
 * @accept: input value
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; n++)
		{
			if (*s == accept[a])
			{
				n++;
				break;
			}
			else if (accept[a + 1] == '\0')
			{
				return (n);
			}
		}
		n++;
	}
	return (n);
}