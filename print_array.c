#include <stddef.h>
#include <stdio.h>

/**
 * print_array - Affiche les éléments d'un tableau d'entiers
 * @array: Le tableau à afficher
 * @size: Le nombre d'éléments dans le tableau
 *
 * Description:
 * Cette fonction parcourt un tableau d'entiers et affiche chaque élément
 * séparé par une virgule et un espace (", "). Après avoir affiché tous les
 * éléments, elle ajoute un retour à la ligne.
 */
void print_array(const int *array, size_t size)
{
	size_t i;

for (i = 0; i < size; i++)
{
printf("%d%s", array[i], (i < size - 1) ? ", " : "");
}
printf("\n");
}
