#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_elem - prints an integer
 * @elem: the integer to print
 *
 * Return: Nothing.
 */

void array_interator(int *array, size_t size, void(*action(int))

{
    unsigned int i;
    if (!array || !action)
         return;
    for (i = 0; i< size; i++)
         action(array[i]);


}
