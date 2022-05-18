#include "monty.h"

/**
 * frees -  frees a dlistint_t list.
 * @stack: pointer to a pointer to the head of a list.
 * Return: void
 */
void frees(stack_t **stack)
{
	stack_t *freed_mem;

	while (*stack)
	{
		freed_mem = (*stack);
		(*stack) = freed_mem->prev;
		free(freed_mem);
	}
}
