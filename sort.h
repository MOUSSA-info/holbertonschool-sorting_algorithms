#ifndef SORT_H
#define SORT_H

#include <stddef.h>

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


void print_list(const listint_t *list);
void insertion_sort_list(listint_t **list);

#endif
