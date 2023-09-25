#include "sort.h"


/**
 * swap - swap two items
 * @array : pointer to array
 * @a : idx1
 * @b : idx2
 */
void swap(int *array, size_t a, size_t b)
{
	int tmp;

	if (array != NULL)
	{
		tmp = array[a];
		array[a] = array[b];
		array[b] = tmp;
	}
}


/**
 * lomuto_quick_sort - quick sort algortihmes
 *
 * @array: pointer to array
 * @size: size of the array
 * @low: lowest index
 * @high: highest index
 * Return: nothing
 */

void lomuto_quick_sort(int *array, size_t low, size_t high, size_t size)
{
	size_t x, y;
	int pivot;

	if ((low >= high) || (array == NULL))
		return;
	pivot = array[high];
	x = low;
	for (y = low; y < high; y++)
	{
		if (array[y] <= pivot)
		{
			if (x != y)
			{
				swap(array, x, y);
				print_array(array, size);
			}
			x++;
		}
	}
	if (x != high)
	{
		swap(array, x, high);
		print_array(array, size);
	}
	if (x - low > 1)
		lomuto_quick_sort(array, low, x - 1, size);
	if (high - x > 1)
		lomuto_quick_sort(array, x + 1, high, size);
}

/**
* quick_sort - quick sort algorithm with lomuto partition schemes
* @array: pointer to the array.
* @size: size of the array.
*/
void quick_sort(int *array, size_t size)
{
	if (array != NULL)
	{
		lomuto_quick_sort(array, 0, size - 1, size);
	}
}

