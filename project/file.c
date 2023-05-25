#include "monty.h"
/**
 * main - function for stack implementation
 * @argc: commandline argument count
 * @argv: command line argument vector
 * Return: 0 for success always.
 */

void process_file(char *filename)
{
    FILE *file;
    char buffer[1024];
    char *start, *op_str, *argument;
    unsigned int line_number = 0, data;
    void (*func_pointer)(stack_t **head, unsigned int data);
    stack_t **head = NULL;

    file = fopen(filename, "r");
    if (file == NULL)
    {
        fprintf(stderr, "Error: Can't open file %s\n", filename);
        exit(EXIT_FAILURE);
    }

    while (fgets(buffer, sizeof(buffer), file))
    {
        line_number++;

        /* Replace newline character with null byte */
        buffer[strcspn(buffer, "\n")] = '\0';

        start = buffer;
        /* Skip any leading spaces in the line string */
        while (*start == ' ' || *start == '\t')
            start++;

        /* Next iteration if line is empty */
        if (*start == '\0')
            continue;

        /* 1st tokenization of the line string to obtain opcode string */
        op_str = strtok(start, " \t");
        if (op_str == NULL)
            continue;
	printf("opcode: %s\n", op_str);
        /* Check opcode validity */
        if (!check_opcode(op_str, line_number))
            exit(EXIT_FAILURE);

        if ((strcmp(op_str, "pall") != 0) && strcmp(op_str, "pint") != 0)
        {
            /* 2nd tokenization of the to obtain opcode argument */
            argument = strtok(NULL, " \t");
            if (argument == NULL || !check_argument(argument))
                continue;
            data = atoi(argument);
        }
	printf("data: %d\n", data);
        /* Process the instruction */
        func_pointer = get_op_func(op_str);
	printf("got here");
        func_pointer(head, data);
    }
    fclose(file);
}
