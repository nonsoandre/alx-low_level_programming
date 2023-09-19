#include "main.h"
/**
 * swap_int - swap a values for each variable
 * @a: first value
 * @b: second value
 * Return: void
*/

void swap_int(int *a, int *b)
{
	int holder = *b;
	*b = *a;
	*a = holder;
}
