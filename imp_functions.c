#include "monty.h"
/**
 * ct_wd - Functions that count how many word have the command
 * @strn: String that contains the line command got
 * Return: number of words.
 */
int ct_wd(char *strn)
{
	int ct = 0;
	int word = 0;

	while (*strn)
	{
		if (*strn == ' ' || *strn == '\n' || *strn == '\t' || *strn == '='
|| *strn == ':')
			ct = 0;

		else if (ct == 0)
		{
			ct = 1;
			word++;
		}
		strn++;
	}
	return (word);
}
/**
 * tk_cm - Function that create a tokens for line comand
 * @comand: line of input in linecomand
 * @delim: delimitador
 * Return: array that contents all tokenof line comand
 */
char **tk_cm(char *comand, char *delim)
{
	char **token = NULL;
	int i, word = 0;

	word = ct_wd(comand);

	token = malloc(sizeof(char *) * (word + 1));
	if (token == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
		return (NULL);
	}

	token[0] = strtok(comand, delim);
	if (token[0] == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
		free(token[0]);
		free(token);
		return (NULL);
	}
	for (i = 1; i < word; i++)
		token[i] = strtok(NULL, delim);
	return (token);
}
/**
 * get_op_funct - Function that looks for a match
 * @tk: operation code
 * @line: command read
 * Return: void
 */
void (*get_op_funct(char *tk, unsigned int line))(stack_t **, unsigned int)
{
	unsigned int i = 0;
	char **tks = NULL;
	int number = 0;

	instruction_t joker[] = {
		{"push", push},
		{"pall", pall},
		{"NULL", NULL}
	};

	tks = tk_cm(tk, "\n\t\r ");

	if (tks[1])
		glb_number = atoi(tks[1]);

	while (joker[i].opcode != NULL)
	{
		if (strcmp(tk, joker[i].opcode) == 0)
		{
			free(tks);
			return (joker[i].f);
		}
		i++;
	}
	(void)line;
	return (NULL);
}
