#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>

#define EXIT_FAILURE 1
/**
 * monty_s - main monte function
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
*/

int monty_s(int argc, char *argv[])
{
	FILE *file;
	char *line = NULL;
	size_t len = 0;
	ssize_t read;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		printf("Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	int line_number = 1;

	while ((read = getline(&line, &len, file)) != -1)
	{
		line[strcspn(line, "\n")] = 0;
		execute_instruction(line, line_number);
		line_number++;
	}

	free(line);
	fclose(file);

	return (0);
}
/**
 * execute_instruction - executes specified instruction
 * @instruction: instruction
 * @line_number: line number
*/
void execute_instruction(char *instruction, int line_number)
{
	char *opcode = strtok(instruction, " \t\n");
	char *arg = strtok(NULL, " \t\n");

	if (strcmp(opcode, "push") == 0)
	{
		if (arg == NULL)
		{
			printf("L%d: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
		int value = atoi(arg);

		if (value == 0 && arg[0] != '0')
		{
			printf("L%d: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
		push(value);
	}
	else
	{
		printf("L%d: unknown instruction %s\n", line_number, opcode);
		exit(EXIT_FAILURE);
	}
}
