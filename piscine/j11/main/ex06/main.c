#include "../../ft_list.h"
#include "../../ex00/ft_create_elem.c"
#include "../../ex02/ft_list_push_front.c"
#include <unistd.h>

void ft_list_clear(t_list **begin_list);

int main()
{
	t_list	*list;

	ft_list_push_front(&list, "toi");
	ft_list_push_front(&list, "lui");
	/* while (list) */
/* 	{ */
/* 		write(1, list->data, 3); */
/* 		write(1, "\n", 1); */
/* 		list = list->next; */
/* 	} */
	ft_list_clear(&list);
	while (list)
	{
		write(1, list->data, 3);
		write(1, "\n", 1);
		list = list->next;
	}
}
