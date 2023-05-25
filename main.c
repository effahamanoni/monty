#include "monty.h"
stack_t *head = NULL;

/**
 * main - Entry Point of the program
 * @argc: Number of command line arguments.
 * @argv: An array containing the arguments.
 * Return: Return 0.
 */
int main(int argc, char **argv)
{
	if (argc < 2 || argc > 2)
		err(1);
	open_file(argv[1]);
	free_node();
	return (0);
}

/**
 * free_node - Frees the nodes in the stack.
 */
void free_node(void)
{
	stack_t *tmp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

/**
 * create_node - Creates and populates the node.
 * @n: Number  inside the node.
 * Return: when successful a pointer to the node. Otherwise NULL.
 */
stack_t *create_node(int n)
{
	stack_t *node;

	node = malloc(sizeof(stack_t));
	if (node == NULL)
		err(4);
	node->next = NULL;
	node->prev = NULL;
	node->n = n;
	return (node);
}
