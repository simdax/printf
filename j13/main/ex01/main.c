#include "../../ft_btree.h"
#include "../../ex00/btree_create_node.c"

#include <unistd.h>

void	functor(void *item)
{
	printf("%s", item);
}

int main()
{
	t_btree *root;
	
	root = btree_create_node("root");
	root->right = btree_create_node("rigth");
	root->left = btree_create_node("left");

	btree_apply_prefix(root, functor);
}
