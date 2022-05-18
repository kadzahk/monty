#include "monty.h"
/**
 * count_word - Functions that count how many word have the command
 * @strn: String that contains the line command got
 * Return: number of words.
 */
int ct_wd(char *strn)
{
    int ct = 0;
    int word = 0;

    while (*strn)
    {
        if (*strn == ' ' || *strn == '\n' || *strn == '\t'|| *strn == '=' || *strn == ':')
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

	word = count_word(comand);

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
	for (i = 1; i < word + 1; i++)
		token[i] = strtok(NULL, delim);
	return (token);
}
