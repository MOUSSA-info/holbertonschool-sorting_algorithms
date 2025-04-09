#include "sort.h"

/**
* swap - Echange les valeurs de deux élements dans un tableau
* @a: Pointeur vers le premier élément
* @b: Pointeur vers le deuxième élément
*/

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
* lomuto_partition - partitionne le tableau autour du pivot en utilisant le
* schéma de lomuto, le pivot est toujour l'élément
* à la fin de partition à triée
*@array: le tableau à trier
*@low: L'indice du début de la partition
*@high: l'indice de la fin de la partition le pivot
*Return: L'indice ou le pivot est placé après partitionnement
*/

int lomuto_partition(int *array, int low, int high)
{
	int pivot = array[high];
	int i = low - 1;
	int j, k;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(&array[i], &array[j]);

			for (k = 0; k <= high; k++)
				printf("%d", array[k]);
			printf("\n");

		}
	}

	swap(&array[i + 1], &array[high]);

	for (k = 0; k <= high; k++)
		printf("%d", array[k]);
	printf("\n");

	return (i + 1);
}

/**
* quick_sort_recursive - Fonction recurvive qui applique le tri rapide
* sur les sous-tableaux
* @array: Le tableau à trier
* @low: l'indice du début de partition
* @high: L'indice de fin de partition
* cette fonction divise le tableau en sous-tableaux et applique
* la récursivement le tri
*/

void quick_sort_recursive(int *array, int low, int high)
{
	int pivot_index;

	if (low < high)
	{
		pivot_index = lomuto_partition(array, low, high);

		quick_sort_recursive(array, low, pivot_index - 1);
		quick_sort_recursive(array, pivot_index + 1, high);
	}
}

/**
* quick_sort - Fonction principale qui initie le tri rapide
* @array: le tableau à trier
* @size: La taille du tableau
* Cett fonction vérifie la validité du tableau
* et appelle la fonction récursive
*/

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_recursive(array, 0, size - 1);
}
