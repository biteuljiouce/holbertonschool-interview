#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_node - inserts a number into a sorted singly linked list.
 *
 * @head: sorted singly linked list
 * @number: index of insertion
 *
 * Return: listint_t* the address of the new node, or NULL if it failed
 */
listint_t *insert_node(listint_t **head, int number)
{
	/* new item to be inserted */
	listint_t *newItem;
	/* given list */
	listint_t *current;

	/* create item */
	newItem = malloc(sizeof(listint_t));
	if (newItem == NULL)
		return (NULL);
	newItem->n = number;
	newItem->next = NULL;

	/* if head is null, set head to new item */
	if (*head == NULL)
	{
		*head = newItem;
		return (*head);
	}

	/* if new item is less than head, set new item as head */
	if ((*head)->n > number)
	{
		newItem->next = *head;
		*head = newItem;
		return (*head);
	}

	/* find the right place to insert the new item */
	current = *head;
	while (current->next != NULL && current->next->n < number)
		current = current->next;

	/* insert new item */
	newItem->next = current->next;
	current->next = newItem;

	/*pointer to new item return */
	return (*head);
}
