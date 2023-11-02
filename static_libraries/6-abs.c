#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @num: num input
 *
 * Return: 0 if success
 */

int _abs(int num)
{
	if (num < 0)
		return (-num);
	else
		return (num);
}
