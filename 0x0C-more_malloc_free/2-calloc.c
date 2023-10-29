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
	int *res, ite, tot_size;

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
	for (ite = 0; ite < tot_size - 1; ite++)
	{
		res[ite] = 0;
	}
	return (res);
}
