#include "sort.h"

/**
 * lomuto_partition - Partitions the array using Lomuto partition scheme.
 * @array: The array to be partitioned.
 * @low: The low index of the partition.
 * @high: The high index of the partition.
 * @size: The size of the array.
 * Return: The index of the pivot after partitioning.
 */
size_t lomuto_partition(int *array, ssize_t low, ssize_t high, size_t size)
{
		int pivot, temp;
		ssize_t i, j;

	pivot = array[high];
	i = low - 1;

	for (j = low; j < high; j++)
	{
	if (array[j] <= pivot)
	{
		i++;
	if (i != j)
	{
		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
		print_array(array, size);
		}
	}
}

	if (i + 1 != high)
	{
	temp = array[i + 1];
	array[i + 1] = array[high];
	array[high] = temp;
	print_array(array, size);
	}

	return (i + 1);
}

/**
 * quicksort - Recursive function to perform quicksort on a partition.
 * @array: The array to be sorted.
 * @low: The low index of the partition.
 * @high: The high index of the partition.
 * @size: The size of the array.
 */
void quicksort(int *array, ssize_t low, ssize_t high, size_t size)
{
	if (low < high)
	{
	size_t pivot = lomuto_partition(array, low, high, size);

	quicksort(array, low, pivot - 1, size);
	quicksort(array, pivot + 1, high, size);
		}
}

/**
 * quick_sort - Sorts an array of integers in ascending order using
 *              the Quick sort algorithm (Lomuto partition scheme).
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quicksort(array, 0, size - 1, size);
}
