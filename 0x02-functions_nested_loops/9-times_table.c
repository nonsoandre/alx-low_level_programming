#include "main.h"
#include <stdio.h>
/**
 * times_table- Prints times table of 9
 */
void times_table(void)
{
	int num, ml, res;

	for (num = 0; num <= 9; num++)
	{
		for (ml = 0; ml <= 9; ml++)
		{
			res = num * ml;
			if (res < 9)
			{
				printf(", ");
				if (num * (ml + 1) < 10)
					printf(" ");
			}
		}
		printf("\n");
	}
}
