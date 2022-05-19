#include "monty.h"
/**
 * pint - prints the value at the top of stack
 * @stack: pointer to the head node pointer of stack
 * @line_number: the line number
 * Return: Nothing.
 */
void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	while (temp)
	{
		if (temp->prev == NULL)
			break;
		temp = temp->prev;
	}

	printf("%d\n", temp->n);
}