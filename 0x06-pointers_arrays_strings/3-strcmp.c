/**
 *_strcmp - compares two strings.
 * @s1: first string
 * @s2: Second string
 * Return: value less than 0 if string is less than the other
 */
int _strcmp(char *s1, char *s2)
{
	int count = 0;

	while (s1[count] == s2[count] && s1[count] != '\0')
	{
		count++;
	}
	return (s1[count] - s2[count]);
}
