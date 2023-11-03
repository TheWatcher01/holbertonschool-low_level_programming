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
 * Return: Retourne toujours 0.
 * En C, un retour de 0 depuis la fonction main indique que le programme
 * s'est terminé avec succès.
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
