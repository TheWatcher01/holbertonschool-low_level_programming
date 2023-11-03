#include "main.h"

/**
 * main - Point d'entrée du programme
 * @argc: Le nombre d'arguments passés au programme.
 * Cela inclut le nom du programme lui-même.
 *
 * @argv: Un tableau de chaînes de caractères contenant les arguments
 * passés au programme.
 * argv[0] est le nom du programme, argv[1] est le premier argument, etc.
 *
 * Return: Retourne 0 si le programme s'est terminé avec succès, 1 sinon.
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int digit;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		digit = atoi(argv[i]);
		if (digit > 0)
		{
			sum = sum + digit;
		}
	}
		printf("%d\n", sum);

	return (0);
}
