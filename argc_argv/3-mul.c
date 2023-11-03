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
	int num1;
	int num2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
