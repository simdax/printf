#include "../../ft_list.h"
#include "../../ex00/ft_create_elem.c"
#include "../../ex02/ft_list_push_front.c"
#include <unistd.h>

void   ft_list_push_front(t_list **begin_list, void *data);
t_list *ft_create_elem(void *data);
t_list	*ft_list_reverse_fun(t_list *begin_list);

int main()
{
	t_list	*list;

	list = ft_create_elem("vou");
	ft_list_push_front(&list, "nou");
	ft_list_push_front(&list, "lui");
	ft_list_push_front(&list, "toi");
	ft_list_push_front(&list, "moi");
	ft_list_reverse_fun(list);

	while (list)
	{
		printf("%s", list->data);
		list = list->next;
	}
}
