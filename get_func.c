#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
/**
 * get_func - list of call-able functions
 * @instruction_s: name of the funcion to run
 * Return: NULL
*/
int (*get_func(char instruction_s))(stack_t **stack, unsigned int line_number)
{
	instruction_t instruction[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
	};
	int i;

	i = 0;
	while (instruction[i].instruction_s != NULL)
	{
		if (instruction[i].instruction_s[0] == instruction_s)
		{
			return (instruction[i].f);
		}
		i++;
	}
	return (NULL);
}
