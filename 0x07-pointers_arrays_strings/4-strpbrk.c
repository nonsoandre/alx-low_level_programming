#include "main.h"
/**
* _strpbrk - Search a string for any set of bytes
* @s: first input value
* @accept: second input value
* Return: Always 0 (Success)
*/
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return ('\0');
}
