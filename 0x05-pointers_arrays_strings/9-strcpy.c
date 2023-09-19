#include "main.h"
/**
 * *_strcpy -  copies the string pointed to by src
 * @dest: char type
 * @src: char type
 * Return: Pointer to `dest`
 */

char *_strcpy(char *dest, char *src)
{
	int index = -1;

	do {
		index++;
		dest[index] = src[index];
	} while (src[index] != '\0');

	return (dest);
}
