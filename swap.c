#include "monty.h"
/**
 * swap - function that swaps the top two elements of the stack.
 * @stack: top pointer of a doubly linked list.
 * @line_number: number of line in file where we found the command.
 * Return: nothing.
 */

void swap(stack_t **stack, unsigned int line_number)
{
	int temp = 0;
	stack_t *aux1 = *stack, *aux2 = *stack;
	(void) line_number;

	aux1 = aux1->prev;
	temp = aux2->n;
	aux2->n = aux1->n;
	aux1->n = temp;
}
