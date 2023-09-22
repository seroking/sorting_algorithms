#include "sort.h"
/**
* bubble_sort - bubble sort
*
* @array: pointer to the array of int.
* @size: the size of the array.
* Return: no return value.
*/
void bubble_sort(int *array, size_t size)
{
	size_t n;
	int swapped, tmp;

	if (!array || size == 0)
		return;

	do {
		swapped = 1;
		for (n = 0; n < size - 1; n++)
		{
			if (array[n] > array[n + 1])
			{
				swapped = 0;
				tmp = array[n];
				array[n] = array[n + 1];
				array[n + 1] = tmp;
				print_array(array, size);
			}
		}
	} while (swapped == 0);
}
