#include "monty.h"
/**
 * didnt_int - print message if parameter receivedis not integer
 * @line: line
 * Return: void
 */
void didnt_int(int line)
{
	fprintf(stderr, "L%u: usage: push integer\n", line);
	exit(EXIT_FAILURE);
}
/**
 * invalid_instrution - print message if le to open the
 * filehas an invalid instruction
 * @line: line of file
 * @opcode: command to execute.
 * Return: void
 **/
void invalid_instrution(int line, char *opcode)
{
	fprintf(stderr, "L%d: unknown instruction %s\n", line, opcode);
	exit(EXIT_FAILURE);
}
/**
 * open_file - print message if its not possible to open the file
 * @argv: arguments received by main, ni this case te filename
 * Return: void
 **/
void open_file(char **argv)
{
	char *filename = argv[1];

	fprintf(stderr, "Error: Can't open file %s\n", filename);
	exit(EXIT_FAILURE);
}

/**
 * malloc_error - print message if cant malloc anymore
 * Return: void
 **/
void malloc_error(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}
/**
 * pop_error - print error message if the stack is empty
 * @line: line
 * Return: void
 */
void pop_error(unsigned int line)
{
	fprintf(stderr, "L%u: can't pop an empty stack\n", line);
	exit(EXIT_FAILURE);
}