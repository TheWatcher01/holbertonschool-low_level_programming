#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: char
 *
 * Return: int
 */

int _atoi(char *s)
{
	int num = 0;
	int sign = 1;
	int hasDigit = 0;

	while (*s)
	{
		if (*s == '-' && !hasDigit)
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			num = num * 10 + (*s - '0');
			hasDigit = 1;
		}
		else if (hasDigit)
		{
			break;
		}
		s++;
	}

	return (num * sign);
}
