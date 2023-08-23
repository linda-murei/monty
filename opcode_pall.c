#include "monty.h"

void pall(stack_t **stack, unsigned int line_number)
{
    stack_t *current = *stack;

    /* Not used, but prevents compiler warning */
    (void)line_number;

    while (current)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
}
