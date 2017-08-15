#include "../../ft_list.h"
#include "../../ex00/ft_create_elem.c"
#include <unistd.h>

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
		write(1, list->data, 3);
		write(1, "\n", 1);
		list = list->next;
	}
}
