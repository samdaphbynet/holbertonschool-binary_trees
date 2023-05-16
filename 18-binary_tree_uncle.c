#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: If node has no uncle, return NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *temp;
	binary_tree_t *parParent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}
	temp = node->parent;
	parParent = temp->parent;

	if (parParent->left == temp)
	{
		return (parParent->right);
	}
	else
	{
		return (parParent->left);
	}
}

