#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root of the tree to check
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int findLeft;
	int correct;

	findLeft = find_left(tree);
	correct = isPerfect(tree, findLeft, 0);
	return (correct);
}

/**
 * find_left - find the leaf in binary tree
 * @tree: pointer to the node the left
 * Return: the depth of the node
 */

int find_left(const binary_tree_t *tree)
{
	int leftDepth;
	int rightDepth;

	if (!tree)
		return (0);
	leftDepth = find_left(tree->left);
	rightDepth = find_left(tree->right);

	if (leftDepth > rightDepth)
		return (leftDepth + 1);
	else
		return (rightDepth + 1);
}

/**
 * isPerfect - function that check if is perfect
 * @tree: pointer to the node of checked is perfect
 * @find: expected depth from the left most leaf
 * @cnt: representing the current level of the tree.
 * Return: 1 is perfect, 0 is not perfect
 */

bool isPerfect(const binary_tree_t *tree, int find, int cnt)
{
	int leftLeaf = 0;
	int rightLeaf = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (find == cnt + 1);
	}
	if (tree->left == NULL || tree->right == NULL)
		return (false);

	leftLeaf = isPerfect(tree->left, find, cnt + 1);
	rightLeaf = isPerfect(tree->right, find, cnt + 1);

	return (leftLeaf && rightLeaf);
}

