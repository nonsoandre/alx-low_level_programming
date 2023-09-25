#include "main.h"
/**
* _strstr - locates substring
* @needle: first input value
* @haystack: second input value
* Return: Always 0 (Success)
*/
char *_strstr(char *haystack, char *needle)
{
	for (haystack = 0; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
