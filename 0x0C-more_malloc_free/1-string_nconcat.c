#include "main.h"
#include <stdlib.h>
/**
* string_nconcat - a function that concatenates two string
* the concatenation includes the first string (s1) plus
* the set number of string the user needs from the s2
* @s1: first string
* @s2: second string
* @n: number of string to get from the first
*  * Return: pointer to the concatenated strings
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0, s2_len = 0, total_len, count = 0;
	char *strout;


	/*check if si and s2 is null*/
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s1 = "";
	}
	/*find the length for each of the strings*/
	while (s1[s1_len])
		s1_len++;
	while (s2[s2_len])
		s2_len++;
	/*check to see the actual len of second string needed for concatenation*/
	if (n > s2_len)
		n = s2_len;
	/*find the total length of all of the string.*/
	total_len = s1_len + n;
	/*Allocate memory for the length of the new string*/
	strout = malloc(total_len + 1);
	/*check for allocation failure*/
	if (strout == NULL)
		return (NULL);
	/*allocate the string literals from both strings into the memory allocated*/
	while (count < total_len)
	{
		if (count < s1_len)
			strout[count] = s1[count];
		else
			strout[count] = s2[count - s1_len];
	}
	strout[count] = '\0';
	return (strout);
}
