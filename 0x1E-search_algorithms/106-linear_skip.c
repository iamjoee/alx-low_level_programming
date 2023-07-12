#include <stdio.h>
#include <math.h>
#include "search.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @list: A pointer to the head of the skip list to search in.
 * @value: The value to search for.
 *
 * Return: A pointer to the first node where value is located, or NULL
 * if value is not present in list or if head is NULL.
 *
 * Description: The function performs a linear search in the skip list,
 * with an optimization to skip multiple nodes at once by using the
 * express lane nodes. The express lane nodes are placed at indexes
 * which are multiples of the square root of the size of the list.
 * The function prints the value being compared during the search process.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *express, *prev;

	if (list == NULL)
		return (NULL);

	express = list->express;
	prev = list;

	while (express && express->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       express->index, express->n);
		prev = express;
		express = express->express;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
	       prev->index, express ? express->index : prev->index);

	express = express ? express : prev;

	while (express)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       express->index, express->n);

		if (express->n == value)
			return (express);

		express = express->next;
	}

	return (NULL);
}
