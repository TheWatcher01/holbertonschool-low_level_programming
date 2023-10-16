#include <stdlib.h>
#include <time.h>
#include <stdio.h>

// main - Print the last digit of the number stored in the variable n
// Return: 0 (sucess) 

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	printf("%Last digit of\n", n );


	return (0);
}
