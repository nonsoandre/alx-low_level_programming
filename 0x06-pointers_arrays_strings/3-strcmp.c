/**
 *_strcmp - compares two strings.
 * @s1: first string
 * @s2: Second string
 * Return: value less than 0 if string is less than the other
 */
int _strcmp(char *s1, char *s2)
{
	int count = 0;

	while (si[count] == s2[count] && si[count] != '\0')
	{
		count++;
	}
	return (s1[count] - s2[count]);
}
