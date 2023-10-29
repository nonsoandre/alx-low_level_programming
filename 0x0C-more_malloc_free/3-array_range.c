#include <stdlib.h>
#include "main.h"
/**
 * *array_range - creates an array of integers from min val to max val
 * @min:range min val
 * @max: range max val
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr; /*for mem allocation return val*/
	int totalElements, i = 0;

	/*checking for validity of range*/
	if (min > max)
		return (NULL);
	/*calc the sum of the range*/
	totalElements = (max - min) + 1;
	/*allocate memory via malloc*/
	ptr = malloc(totalElements * sizeof(int));
	/*check for malloc return*/
	if (ptr == NULL)
		return (NULL);
	while (min <= max)
	{
		ptr[i] = min++;
		i++;
	}
	return (ptr);
}
