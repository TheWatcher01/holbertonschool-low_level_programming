#include "main.h"
/**
 * _strcmp - function that compares two strings.
 * @s1: pointers in the first string characters
 * @s2: pointers in the seconde string characters
 * Return:
 * -1 si la première chaîne est inférieure à la deuxième
 * 0 si les deux chaînes sont égales
 * 1 si la première chaîne est supérieure à la deuxième
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		{
			if (*s1 != *s2)
				return (*s1 - *s2);
		}
	s1++;
	s2++;
	}
	return (0);
}
