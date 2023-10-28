#include <stdlib.h>
/**
* malloc_checked - Allocates memory using malloc
* @b: size amount to allocate
* Return: Pointer (allocated memory)
*/
void *malloc_checked(unsigned int b)
{
	int *pntr = malloc(b);

	if (pntr == NULL)
	{
		exit(98);
	}
	return (pntr);
}
