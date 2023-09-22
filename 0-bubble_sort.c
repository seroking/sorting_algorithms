#include "sort.h"

/**
 * swap - swap two value in an array
 *
 * @num1 : num1 (int)
 * @num2 : num2 (int)
 * Return: none
 */

void swap(int num1, int num2)
{
	int tmp;

	tmp = num1;
	num1 = num2;
	num2 = tmp;
}

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
	int swapped;

	if (!array || size == 0)
		return;

	do {
		swapped = 1;
		for (n = 0; n < size - 1; n++)
		{
			if (array[n] > array[n + 1])
			{
				swapped = 0;
				swap(array[n], array[n + 1])
				print_array(array, size);
			}
		}
	} while (swapped == 0);
}
