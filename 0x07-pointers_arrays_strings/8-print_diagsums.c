#include "main.h"
#include <stdio.h>
/**
* print_diagsums - prints the sum of the two diagonals of a
* square matrix of integers.
* @a: input
* @size: input
* Return: Always 0 (Success)
*/
void print_diagsums(int *a, int size)
{
	int sum_1 = 0;
	int sum_2 = 0;
	int y = 0;

	for (; y < size; y++)
	{
		sum_1 += *(a + 1 * size + 1);
		sum_2 += *(a + 1 * size + (size - 1 - y));
	}
	printf("%d, %d\n", sum_1, sum_2);
}
