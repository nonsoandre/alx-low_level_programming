/**
 *_strncpy - join two strings
 * @dest: function that we will repl
 * @src: this is the source file we are copying from
 * @n: the length of the array
 * Return: string in dest file
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
