#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * push - pushes an element to the stack
 * @stack: stack
 * @line_number: line number
*/
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node;
	int n;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = n;
	new_node->next = *stack;
	new_node->prev = NULL;

	if (*stack != NULL)
		(*stack)->prev = new_node;

	*stack = new_node;
}

/**
 * pall - prints all the values on the stack. from the top down
*/
void pall(void)
{
	int top = -1;

	for (int i = top; i >= 0; i--)
	{
	printf("%d\n", stack[i]);
	}
}

/**
 * monty_pint - prints the value at the top of the stack followed by a new line
 * Return: top of stack
*/

void monty_pint(void)
{

}

/**
 * monty_pop - removes the top element of the stack
 * Return: result
*/

void monty_pop(void)
{

}
