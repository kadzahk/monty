#include "monty.h"
/**
 * push -push (add) node to list.
 * @stack: element at the top of the stack.
 * @line_number: constant int value in the structure
 * Return: void
 **/
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *list_node;

	list_node = (stack_t *)malloc(sizeof(stack_t));
if (list_node == NULL)
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}

	list_node->n = glb_number;
	list_node->next = NULL;
	list_node->prev = NULL;

	if (*stack == NULL)
	{
		*stack = list_node;
	}
	else
	{
		(*stack)->next = list_node;
		list_node->prev = *stack;
		*stack = list_node;
	}
	(void)line_number;
}
