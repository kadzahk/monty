#include "monty.h"

/**
 * pop - Function that pop (delete) the value at top of stack
 * @stack: element at the top of the stack (head)
 * @line_number: constant int value in the structure
 * Return: void
 **/
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;

	if (*stack == NULL)
        fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
		

	*stack = (*stack)->prev;

	if ((*stack) != NULL)
		(*stack)->next = NULL;

	free(tmp);

	(void)line_number;
}
