/**
 * _isdigit - write a function that print digit 0 à 9
 * @c: char to check
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
