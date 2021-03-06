#ifndef _MONTY_H_
#define _MONTY_H_

#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int glb_number;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

int ct_wd(char *strn);
char **tk_cm(char *comand, char *delim);
void read_the_file(char **argv);
void pall(stack_t **stack, unsigned int line_number);
int main(int argc, char **argv);
void (*get_op_funct(char *tk, unsigned int line))(stack_t **, unsigned int);
void push(stack_t **stack, unsigned int line_number);
void frees(stack_t **stack);
void invalid_instrution(int line, char *opcode);
void didnt_int(int line);
void open_file(char **argv);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void malloc_error(void);
void pop_error(unsigned int line);
void int_error(int line);
void a_error(unsigned int line);
void add(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void swap_error(unsigned int line);

#endif
