/**
 * string_toupper - function that changes all lowercase letters
 * of a string to uppercase.
 * @a: Pointers to the converted strings character
 * Return: Pointers to the converted string
 */

char *string_toupper(char *a)
{
	int start = 0;
	char *string = a;

	while (a[start] != '\0')
	{
		if (a[start] >= 'a' && a[start] <= 'z')
		{
			a[start] = a[start] - 32;
		}
		start++;
	}

	return (string);
}
