#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** 
 * main - Print the last digit of the number stored in the variable n
 *
 *  Return: 0 (sucess)
 */   

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is ", n);

	if (n % 10 > 5)
	{
		printf("%d and is greater than 5\n", n % 10);
	}

	else if (n % 10 == 0)
	{
		printf("%d and is 0\n", n % 10);
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", n % 10);
	}

	return (0);
}
