#include "sort.h"

void insertion_sort_list(listint_t **list)
{
    listint_t *current = *list;
    listint_t *previous;
    int best_case = 1; 

    while (current)
    {
        previous = current;
        current = current->next;

        while (previous->prev && previous->n < previous->prev->n)
        {
            best_case = 0;
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

    if (best_case)
    {
        printf("The list is already sorted in ascending order.\n");
    }
    else if (previous->prev == NULL)
    {
        printf("The list is sorted in descending order.\n");
    }
    else
    {
        printf("The list is sorted in average case.\n");
    }
}