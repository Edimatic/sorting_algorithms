#include "sort.h"


/**
 * swap_node_ahead - Swap a node in a listint_t doubly-linked list
 *                   list of integers with the node ahead of it.
 * @list: A pointer to the head of a doubly-linked list of integers.
 * @eddi: A pointer to the last-end of the doubly-linked list.
 * @node2: A pointer to the current swapping node of the cocktail node algo.
 */
void swap_node_ahead(listint_t **list, listint_t **eddi, listint_t **node2)
{
	listint_t *tmp = (*node2)->next;

	if ((*node2)->prev != NULL)
		(*node2)->prev->next = tmp;
	else
		*list = tmp;
	tmp->prev = (*node2)->prev;
	(*node2)->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = *node2;
	else
		*eddi = *node2;
	(*node2)->prev = tmp;
	tmp->next = *node2;
	*node2 = tmp;
}

/**
 * swap_node_behind - Swap a node in a listint_t doubly-linked
 *                    list of integers with the node behind it.
 * @list: A pointer to the head of a doubly-linked list of integers.
 * @eddi: A pointer to the last-end of the doubly-linked list.
 * @node2: A pointer to the current swapping node of the cocktail node algo.
 */
void swap_node_behind(listint_t **list, listint_t **eddi, listint_t **node2)
{
	listint_t *tmp = (*node2)->prev;

	if ((*node2)->next != NULL)
		(*node2)->next->prev = tmp;
	else
		*eddi = tmp;
	tmp->next = (*node2)->next;
	(*node2)->prev = tmp->prev;
	if (tmp->prev != NULL)
		tmp->prev->next = *node2;
	else
		*list = *node2;
	(*node2)->next = tmp;
	tmp->prev = *node2;
	*node2 = tmp;
}

/**
 * cocktail_sort_list - Sort a listint_t doubly-linked list of integers in
 *                      ascending order using the cocktail shaker algorithm.
 * @list: A pointer to the head of a listint_t doubly-linked list.
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *eddi, *node2;
	bool shaken_not_stirred = false;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (eddi = *list; eddi->next != NULL;)
		eddi = tail->next;

	while (shaken_not_stirred == false)
	{
		shaken_not_stirred = true;
		for (node2 = *list; node2 != eddi; node2 = node2->next)
		{
			if (node2->n > node2->next->n)
			{
				swap_node_ahead(list, &eddi, &node2);
				print_list((const listint_t *)*list);
				shaken_not_stirred = false;
			}
		}
		for (node2 = node2->prev; node2 != *list;
				node2 = node2->prev)
		{
			if (node2->n < node2->prev->n)
			{
				swap_node_behind(list, &eddi, &node2);
				print_list((const listint_t *)*list);
				shaken_not_stirred = false;
			}
		}
	}
}
