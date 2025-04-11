#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using Bubble Sort
 * @array: The array to be sorted
 * @size: The number of elements in the array
 *
 * Description:
 * This function implements the Bubble Sort algorithm. It repeatedly compares
 * adjacent elements in the array and swaps them if they are in the wrong order.
 * After each swap, it prints the current state of
 * the array using the print_array
 * function. The algorithm stops early if no swaps are made during a pass, which
 * means the array is already sorted.
 */
void bubble_sort(int *array, size_t size)
{
	if (!array || size < 2)
	{
		return;
	}
	int swapped;
	for (size_t i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (size_t j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = 1;
				print_array(array, size);
			}
		}
		if (!swapped)
		{
			break;
		}
	}
}
