#include "../../ft_btree.h"
#include "../../ex00/btree_create_node.c"

void	functor(void *item)
{
	printf("%s", item);
}

int main()
{
	b_tree *root;
	
	root = btree_create_node("root");
	root->left = btree_create_node("left");
	root->right = btree_create_node("rigth");

	btree_apply_prefix(root, functor);
}
