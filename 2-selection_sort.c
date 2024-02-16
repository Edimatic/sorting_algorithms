#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order using
 *                  the Selection sort algorithm.
 * * @array: The array to be sorted.
 * @size: The size of the array.
 */

void selection_sort(int *array, size_t size)
{
		size_t idxx;
		size_t eddi;
		size_t min_idx;
		int temp;

	if (array == NULL || size < 2)
		return;

	for (idxx = 0; idxx < size - 1; idxx++)
	{
	min_idx = idxx;

	for (eddi = idxx + 1; eddi < size; eddi++)
	{
	if (array[eddi] < array[min_idx])
		min_idx = eddi;
	}

	if (min_idx != idxx)
	{
	temp = array[idxx];
	array[idxx] = array[min_idx];
	array[min_idx] = temp;

	print_array(array, size);
		}
	}
}

