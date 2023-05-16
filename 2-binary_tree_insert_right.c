#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node as the right-child of another node
 * @parent: parent of another node
 * @value: the value of the now node
 * Return: pointer to the created node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;
	binary_tree_t *new_node;


	if (parent == NULL)
		return (NULL);


	new_node = (binary_tree_t *)malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);

	temp = parent->right;
	parent->right = new_node;
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = temp;

	if (temp != NULL)
		temp->parent = new_node;

	return (new_node);
}


