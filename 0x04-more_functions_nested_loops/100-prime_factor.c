#include <stdio.h>
#include <math.h>
/**
  * main - prints the largets prime factor
  * Return: 0
  */
int main(void)
{
	long int n, max, a;

	n = 612852475143;
	max = -1;

	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}
	for (a = 3; a <= sqrt(n); a = a + 2)
	{
		while (n % 2 == 0)
		{
			max = 2;
			n = n / a;
		}
	}
	if (n > 2)
	{
		max = n;
	}
	printf("%ld\n", max);
	return (0);
}
