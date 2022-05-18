#include "monty.h"
/**
 * pall - prints the data of all nodes in stack
 * @stack: pointer to the head node pointer of stack
 * @line_number: the line number
 * Return: Nothing
 */
void pall(stack_t **stack, unsigned int line_number)
{
stack_t *tp = *stack;
(void)line_number;

while (tp)
{
printf("%d\n", tp->n);
tp = tp->prev;
}
}
