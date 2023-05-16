#include "binary_trees.h"
/**
 * binary_tree_is_leaf - free all the binary tree
 * @node: pointer to node to check
 * Return: 1 if is a leaf, 0 else
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node)
	{
		if (!node->right && !node->left)
			return (1);
	}
		return (0);
}

