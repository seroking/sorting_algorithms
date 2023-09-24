#include "sort.h"

/*
 * selection_sort - sort an array with selection sort algorithme
 * @array : pointer to the array
 * @size: size of the array
 * Return: nothing.
 **/
void selection_sort(int *array, size_t size)
{

	size_t x, y, min_idx;
	int tmp;

	for (x = 0; x < size - 1; x++)
	{

		min_idx = x;
		for (y = x + 1; y < size; y++)
		{
			if (array[y] < array[min_idx])
				min_idx = y;
		}

		if (min_idx != x)
		{
			tmp = array[x];
			array[x] = array[min_idx];
			array[min_idx] = tmp;
			print_array(array, size);
		}
	}
}
