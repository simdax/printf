#include "srcs/libft.h"
#include <stdio.h>
#include <stdlib.h>

void	del(void *data, size_t size)
{
//	free(data);
	data = NULL;
	size = 0;
}

t_list	*io(t_list j)
{
	t_list *io = ft_lstnew("fdsf", 4);
	return io;
}

int main()
{
	t_list *n = ft_lstnew("fdasds", 4);
	t_list *new2 = ft_lstnew("fdasds", 4);
	printf("%p", new2);
	n->next = new2; 
	printf("%p", new2->next);
	ft_lstdel(&n, del);
	//t_list *a = ft_lstmap(&new2, io);
	//printf("%p", new2);
}
