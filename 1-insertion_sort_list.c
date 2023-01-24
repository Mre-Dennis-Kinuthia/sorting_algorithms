#include "sort.h"

void insertion_sort_list(listint_t **list)
{
listint_t *current = *list;
listint_t *previous;

while (current)
{
previous = current;
current = current->next;

while (previous->prev && previous->n < previous->prev->n)
{
previous->prev->next = previous->next;
if (previous->next)
previous->next->prev = previous->prev;
previous->next = previous->prev;
previous->prev = previous->prev->prev;
previous->next->prev = previous;
if (previous->prev)
previous->prev->next = previous;
else
*list = previous;
print_list(*list);
}
}
}
