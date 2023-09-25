#include "main.h"
/**
* _strstr - locates substring
* @needle: first input value
* @haystack: second input value
* Return: Always 0 (Success)
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int a = 0;

	if (!*needle)
	{
		return (haystack);
	}
	for (i = 0; *haystack != '\0'; haystack++)
	{
		for (a = 0; needle[a] != '\0'; a++)
		{
			if (haystack[i + a] != needle[a])
			{
				break;
			}
		}
		if (needle[a] == '\0')
		{
			return (&haystack[i]);
		}
	}
	return (0);
}
