#include "main.h"
/**
*_isalpha - controls if a character is alphabetic
*@c: character to be verified
*Return: return 0 or 1 for validation
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
