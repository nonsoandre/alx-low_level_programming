#include <stdio.h>
/**
  * main - multiples of 3 until 1024
  * Return: Always 0
  */
int main(void)
{
	int multiple;
	int sum_of_multiples = 0;

	for (multiple = 0; multiple < 1024; multiple++)
	{
		if ((multiple % 3) == 0 || (multiple % 5) == 0)
		{
			sum_of_multiples += multiple;
		}
	}
	printf("%d\n", sum_of_multiples);
	return (0);
}
