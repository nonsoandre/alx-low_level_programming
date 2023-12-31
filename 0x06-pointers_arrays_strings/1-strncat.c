/**
 *_strncat - join two strings
 * @dest: function that we will repl
 * @src: this is the source file we are copying from
 * @n: the length of the array
 * Description - function that concatenate strings
 * Return: string in dest file
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;

while (dest[i] != '\0')
{
i++;
}
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
