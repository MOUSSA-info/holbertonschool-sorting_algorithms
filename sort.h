#ifndef SORT_H
#define SORT_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
* struct listint_s - Node de liste doublement chaînée
* @n: Entier stocké dans le node
* @prev: Pointeur vers l'élément précédent
* @next: Pointeur vers l'élément suivant
*/
typedef struct listint_s
{
const int n;
struct listint_s *prev;
struct listint_s *next;
} listint_t;

void bubble_sort(int *array, size_t size);
void print_list(const listint_t *list);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void swap(int *a, int *b);
int lomuto_partition(int *array, int low, int high);
void quick_sort_recursive(int *array, int low, int high);
void quick_sort(int *array, size_t size);
void print_array(const int *array, size_t size);

#endif
