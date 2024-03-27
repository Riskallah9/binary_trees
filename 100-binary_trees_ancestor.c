#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 *
 * @first: - pointer to the first node
 * @second: - pointer to the second node
 * Return: pointer to the lowest common ancestor node, or NULL if no one exists
 */
binary_tree_t *binary_trees_ancestor(
	const binary_tree_t *first,
	const binary_tree_t *second)
{
	binary_tree_t *temp;

	while (first)
	{
		temp = (binary_tree_t *)second;
		while (temp)
		{
			if (first == temp)
				return ((binary_tree_t *)first);
			temp = temp->parent;
		}
		first = first->parent;
	}

	return (NULL);
}
