#include "lists.h"
/**
 * add_nodeint - add node at beginning of a listint_t list
 * @head: head of double pointer
 * @n: int add the listReturn: NULL if it fails
 * Return: NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		if (ptr == NULL)
			return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
