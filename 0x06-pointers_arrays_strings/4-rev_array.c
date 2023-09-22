/**
 *reverse_array - compares two strings.
 * @a: array
 * @n: array size
 * Return: value less than 0 if string is less than the other
 */
void reverse_array(int *a, int n)
{
	int begin = 0;
	int end = n - 1;
	int holder;

	while (begin < end)
	{
		holder = a[begin];
		a[begin] = a[end];
		a[end] = holder;
		begin++;
		end--;
	}
}
