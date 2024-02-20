#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/* Comparison direction macros for bitonic sort */
#define UP 0
#define DOWN 1

/**
 * enum bool - Enumeration of Boolean values.
 * @false: Equals 0.
 * @true: Equals 1.
 */

typedef enum bool
{
	false = 0,
	true
} bool;

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Showing functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

void insertion_sort_list(listint_t **list);
listint_t *create_listint(const int *array, size_t size);

/* quick sorting */

size_t lomuto_partition(int *array, ssize_t low, ssize_t high, size_t size);
void quicksort(int *array, ssize_t low, ssize_t high, size_t size);
void quick_sort(int *array, size_t size);

void swap_nodes(listint_t **list, listint_t **node1, listint_t **node2);
void swap_node_ahead(listint_t **list, listint_t **eddi, listint_t **node2);
void swap_node_behind(listint_t **list, listint_t **eddi, listint_t **node2);
void cocktail_sort_list(listint_t **list);

void merge_subarr(int *subarr, int *buff, size_t front, size_t mid,
		size_t back);
void merge_sort_recursive(int *subarr, int *buff, size_t front, size_t back);
void merge_sort(int *array, size_t size);

void swap_ints(int *a, int *b);
void max_heapify(int *array, size_t size, size_t base, size_t root);
void heap_sort(int *array, size_t size);

/* Algoritms functions for the sorting */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);

void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);


#endif
