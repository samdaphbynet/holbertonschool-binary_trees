#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node as the right-child of another node
 * @parent: parent of another node
 * @value: the value of the now node
 * Return: pointer to the created node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	temp = parent->left;
	parent->left = new_node;
	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;
	new_node->left = temp;

	if (temp != NULL)
		temp->parent = new_node;

	return (new_node);
}
