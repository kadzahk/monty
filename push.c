#include "monty.h"
/**
 * push -push (add) node to list.
 * @stack: element at the top of the stack.
 * @line_number: constant int value in the structure
 * Return: void
 **/
void push(stack_t **stack, unsigned int line_number)
{

	stack_t *new = malloc(sizeof(stack_t));

	if (new == NULL)
	{
		fprintf(stderr, "L%d: can't malloc\n", line_number);
		exit(EXIT_FAILURE);
	}
	new->n = glb_number;
	new->next = *stack;
	new->prev = NULL;
	if (*stack != NULL)
	{
		(*stack)->prev = new;
	}
	*stack = new;
}

