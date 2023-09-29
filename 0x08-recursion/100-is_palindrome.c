#include "main.h"
/**
* check_palindrome - compares each character of the string.
* @start: string
* @end: smallest iterator.
* Return: 1 else 0
*/
int check_palindrome(char *start, char *end)
{

	if (start >= end)
	{
		return (1);
	}
	if (*start != *end)
	{
		return (0);
	}
	return (check_palindrome(start + 1, end - 1));
}
/**
* find_end - detects if end of string.
* @s: string.
*/
char *find_end(char *s)
{
	if (*s == '\0')
	{
		return (s - 1);
	}
	return (find_end(s + 1));
}
/**
* is_palindrome - detects if a string is a palindrome.
* @s: string.
* Return: 1 if s is a palindrome, 0 if not.
*/
int is_palindrome(char *s)
{
	char *end = find_end(s);

	return (check_palindrome(s, end));
}
