#include <stdio.h>
#include "sort.h"

/**
* print_list - Prints a doubly linked list of integers
* @list: Pointer to the head of the list
*
* Description:
* This function traverses a doubly linked list and prints its elements.
* Each element is separated by a comma and a space (`, `). After printing
* all elements, it adds a newline character.
*/
void print_list(const listint_t *list)
{
const listint_t *current = list;

while (current != NULL)
{
printf("%d", current->n);
if (current->next != NULL)
printf(", ");
current = current->next;
}
printf("\n");
}
