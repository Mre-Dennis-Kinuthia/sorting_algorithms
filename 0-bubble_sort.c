#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - entry point
 * 
 * return: void
 */

void bubble_sort(int *array, size_t size)
{
    int temp;
    size_t i, j ;
    for(i = 0; i < size; i++)
    {
        for (j = 0; j < size - 1; i++)
        {
            if(array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                print_array(array, size);
            }
        }
    }
}