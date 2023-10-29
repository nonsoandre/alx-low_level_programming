#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: n elements
 * @size: size of bytes
 * Return: pointer to the allocated memory
 * if nmemb or size is 0, returns NULL
 * if malloc fails, returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int ite = 0, tot_size;
	char *res;

	/*check if your arguments is 0. if so return NUll*/
	if (nmemb == 0 || size == 0)
		return (NULL);
	/*assign memory on the heap for element*/
	tot_size = nmemb * size;
	res = malloc(tot_size);
	/*check wether the memory is allocated*/
	if (res == NULL)
		return (NULL);
	/*set each element of array to 0*/
	do {
		res[ite] = 0;
		ite++;
	} while (ite < (tot_size));
	return (res);
}
