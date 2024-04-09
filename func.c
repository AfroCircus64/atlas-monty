#include "monty.h"
#include <stdio.h>
/**
 * push - pushes an element to the stack
 * @element: element to be pushedS
*/
void push(int element)
{
	int top = -1;

	if (top >= STACK_SIZE - 1)
	{
		printf("Error: stack overflow\n");
		exit(EXIT_FAILURE);
	}
	stack[++top] = element;
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
