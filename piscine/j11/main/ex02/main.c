#include "../../ft_list.h"
#include "../../ex00/ft_create_elem.c"
#include <unistd.h>
#include <stdio.h>

void   ft_list_push_front(t_list **begin_list, void *data);
t_list *ft_create_elem(void *data);

int main()
{
	t_list	*list;

	list = ft_create_elem("coucou");
	ft_list_push_front(&list, "toi");
	ft_list_push_front(&list, "lui");

	while (list)
	{
		printf("%s\n", list->data);
		list = list->next;
	}
}
