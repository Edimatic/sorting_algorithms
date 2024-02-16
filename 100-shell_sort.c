#include "sort.h"

/**
 * shell_sort - Sorts an array of integers in ascending order using
 *              the Shell sort algorithm with the Knuth sequence.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void shell_sort(int *array, size_t size)
{
		size_t gap = 1;
		size_t idx, eddi;
		int temp;

	if (array == NULL || size < 2)
		return;

	while (gap < size / 3)
	gap = gap * 3 + 1;

	for (; gap > 0; gap /= 3)
{
	for (idx = gap; idx < size; idx++)
	{
		temp = array[idx];

	for (eddi = idx; eddi >= gap && array[eddi - gap] > temp; eddi -= gap)
	{
	array[eddi] = array[eddi - gap];
		}

		array[eddi] = temp;
	}

		print_array(array, size);
	}
}
