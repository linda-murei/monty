#include "monty.h"
/**
  *f_sub- sustration
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *p;
	int sud, node;

	p = *head;
	for (node = 0; p != NULL; node++)
		p = p->next;
	if (node < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	p = *head;
	sud = p->next->n - p->n;
	p->next->n = sud;
	*head = p->next;
	free(p);
}
