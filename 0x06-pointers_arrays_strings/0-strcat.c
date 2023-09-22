/**
 *_strcat - join two strings
 * @dest: function that we will repl
 * @src: this is the source file we are copying from
 * Description - function that concatenate strings
 * Return: string in dest file
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;

while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}




