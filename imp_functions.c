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
	int i = 0, cword = 0;
	char **splited_words = NULL;

	cword = ct_wd(comand);

	splited_words = malloc(sizeof(char *) * (cword + 1));
	if (splited_words == NULL)
	{
		malloc_error();
		return (NULL);
	}

	splited_words[0] = strtok(comand, delim);

	if (splited_words[0] == NULL)
	{
		malloc_error();
		free(splited_words[0]);
		free(splited_words);
		return (NULL);
	}

	for (i = 1; i < cword; i++)
	{
		splited_words[i] = strtok(NULL, delim);
	}
	return (splited_words);
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

	instruction_t joker[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"NULL", NULL}
	};

	tks = tk_cm(tk, "\n\t\r ");

	if (tks[1])
		glb_number = atoi(tks[1]);

	for (i = 0; joker[i].opcode != NULL; i++)
	{
		if (strcmp(tk, joker[i].opcode) == 0)
		{
			free(tks);
			return (joker[i].f);
		}
	}
	(void)line;
	return (NULL);
}
