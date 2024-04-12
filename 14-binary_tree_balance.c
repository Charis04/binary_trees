#include "binary_trees.h"

size_t max_height(const binary_tree_t *tree);

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return: balance factor of the tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int lh, rh, bf;

	if (tree == NULL)
		return (0);

	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);
	bf = lh - rh;

	return (bf);
}

/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h;

	if (tree == NULL)
		return (0);

	h = max_height(tree);
	return (h);
}

/**
 * max_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: height of the tree
 */

size_t max_height(const binary_tree_t *tree)
{
	size_t lh, rh;

	if (tree == NULL)
		return (0);

	lh = max_height(tree->left);
	rh = max_height(tree->right);

	if (lh >= rh)
		return (lh + 1);
	else
		return (rh + 1);
}
