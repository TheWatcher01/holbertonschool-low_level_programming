#include <stdlib.h>
#include <stdio.h>

/**
 * main - print _putchar
 * @void: void
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int i;
	char word[] = "_putchar";

	for (i = 0 ; i <= 7; i++)
	{
		putchar(word[i]);
	}
	putchar('\n');

	return (0);
}
