#include "monty.h"
/**
 * f_queue - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - add node to the tail stack
 * @n: new_value
 * @head: head of the stack
 * Return: no return
*/
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *aux;

	auxs = *head;
	new_nod = malloc(sizeof(stack_t));
	if (new_nod == NULL)
	{
		printf("Error\n");
	}
	new_nod->n = n;
	new_nod->next = NULL;
	if (auxs)
	{
		while (auxs->next)
			auxs = auxs->next;
	}
	if (!auxs)
	{
		*head = new_nod;
		new_nod->prev = NULL;
	}
	else
	{
		auxs->next = new_nod;
		new_nod->prev = auxs;
	}
}
