#include <stdio.h>
#include "sort.h"

/**
* swap_nodes - Swaps two adjacent nodes in a doubly linked list
* @a: First node to swap
* @b: Second node to swap
* @list: Double pointer to the head of the list
*/
void swap_nodes(listint_t *a, listint_t *b, listint_t **list)
{
listint_t *prev_a = a->prev;
listint_t *next_b = b->next;

if (prev_a)
prev_a->next = b;
else
*list = b;

b->prev = prev_a;
b->next = a;
a->prev = b;
a->next = next_b;

if (next_b)
next_b->prev = a;
}

/**
* insertion_sort_list - Sorts a doubly linked
* list using Insertion Sort
* @list: Double pointer to the head of the list
*
* Description:
* Iterates through the list, moving each node backward into
* the correct position
* in the sorted portion. Prints the list after every swap.
*/
void insertion_sort_list(listint_t **list)
{
if (!list || !*list || !(*list)->next)
return;

listint_t *current = (*list)->next;

while (current)
{
listint_t *temp = current->prev;

while (temp && current->n < temp->n)
{
swap_nodes(temp, current, list);
print_list(*list);
temp = current->prev;
}

current = current->next;
}
}
