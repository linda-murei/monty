#include "monty.h"
/**
 * f_swap - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_swap(stack_t **head, unsigned int counter)
{
        stack_t *k;
        int lens = 0, p;

        k = *head;
        while (k)
        {
                k = k->next;
                lens++;
        }
        if (lens < 2)
        {
                fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
                fclose(bus.file);
                free(bus.content);
                free_stack(*head);
                exit(EXIT_FAILURE);
        }
        k = *head;
        p = k->n;
        k->n = k->next->n;
        k->next->n = p;
}
