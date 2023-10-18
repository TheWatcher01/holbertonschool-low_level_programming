#include <stdio.h>
#include "main.h"

void print_alphabet_x10(void);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

/**
 * print_alphabet_x10 - Print the alphabet in lowercase, x10
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
