#include "main.h"
/**
 * print_alphabet_x10 - Print the alphabet in lowercase, x10
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
    char letter = 'a';
    int i = 0;

    while (i < 10)
    {
        while (letter <= 'z')
        {
            putchar(letter);
            letter++;
        }
        putchar('\n');
        letter = 'a';
        i++;
    }
}
