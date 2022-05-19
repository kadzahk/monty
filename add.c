#include "monty.h"
/**
 * add - Function that adds the top two elements of the stack
 * @stack: element at the top of the stack (head)
 * @line_number: constant int value in the structure
 * Return: void
 **/
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;

	if (tmp == NULL || (*stack)->prev == NULL)
		a_error(line_number);

	(tmp->prev)->n = tmp->n + (tmp->prev)->n;
	pop(stack, line_number);
}

/**
 * a_error - print error message if the stack is empty.
 * @line: line.
 * Return: void.
 */
void a_error(unsigned int line)
{
	fprintf(stderr, "L%u: can't add, stack too short\n", line);
	exit(EXIT_FAILURE);
}