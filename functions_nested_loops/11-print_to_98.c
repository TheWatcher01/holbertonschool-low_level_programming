#include <stdio.h>
/**
  * print_to_98 - Prints all natural numbers from n to 98
  * @n: The number to start printing from
  *
  * Return: Always 0.
  */
void print_to_98(int n )
{
	int i;
	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	printf("98\n")
}

int main(void) {
  print_to_98(0);
  print_to_98(98);
  print_to_98(111);
  print_to_98(81);
  print_to_98(-10);
  return 0;
}
