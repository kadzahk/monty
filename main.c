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
		error_argv();

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
		open_error(argv);
	}

	for (line = 1; getline(&buf, &len, file_proc) != -1; line++)
	{
		f = get_op_code(buf, line);
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