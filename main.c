#include "monty.h"
/**
 * main - Monty bytecodes files interpreter
 * @argc: total of arguments
 * @argv: The arguments, monty files
 * Return: depends the execution
 */
int main(int argc, char **argv)
{
	if (argc != 2)
		fprintf(stderr, "USAGE: monty file\n");
	    exit(EXIT_FAILURE);

	read_the_file(argv);
	return (0);
}

/**
 * read_the_file - Function that open, read and execute.
 * @argv: arguments
 * Return: void
 **/

void read_the_file(char **argv)
{
	FILE *file_proc = NULL;
	char *buf = NULL, *token = NULL;
	size_t len = 0;
	int line = 1;
	stack_t *stack = NULL;
	void (*f)(stack_t **stack, unsigned int line_number);

	file_proc = fopen(argv[1], "r");
	if (file_proc == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	for (line = 1; getline(&buf, &len, file_proc) != -1; line++)
	{
		f = get_op_funct(buf, line);
		if (f == NULL)
			invalid_instrution(line, strtok(buf, " "));
		else
			f(&stack, line);
	}

	fclose(file_proc);
	free(buf);
	frees(&stack);
	(void)token;
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
