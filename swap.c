#include "monty.h"
/**
 * swap - function that swaps the top two elements of the stack.
 * @stack: top pointer of a doubly linked list.
 * @line_number: number of line in file where we found the command.
 * Return: nothing.
 */

void swap(stack_t **stack, unsigned int line_number)
{
	int i;

	if (*stack == NULL || (*stack)->prev == NULL)
		swap_error(line_number);

	i = (*stack)->n;
	(*stack)->n = (*stack)->prev->n;
	(*stack)->prev->n = i;

	(void)line_number;
}
/**
 * swap_error - print error message if the stack is empty.
 * @line: line.
 * Return: void.
 */
void swap_error(unsigned int line)
{
	fprintf(stderr, "L%u: can't swap, stack too short\n", line);
	exit(EXIT_FAILURE);
}
