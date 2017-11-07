#include "../../ft_list.h"
#include "../../ex00/ft_create_elem.c"
#include "../../ex02/ft_list_push_front.c"
#include <unistd.h>

int strcmp(const char *, const char *);
void   ft_list_push_front(t_list **begin_list, void *data);
t_list *ft_create_elem(void *data);
void	ft_sort_list(t_list **begin_list, int (*cmp)());

int main()
{
	t_list	*list;

	// lui toi moi
	list = ft_create_elem("aaa");
	ft_list_push_front(&list, "bbb");
	ft_list_push_front(&list, "ccc");
	ft_list_push_front(&list, "ddd");
	ft_list_push_front(&list, "eee");
	ft_sort_list(&list, strcmp);
	write(1, "sortie du tri", 16);
	while (list)
	{
		write(1, list->data, 3);
		write(1, "\n", 1);
		list = list->next;
	}
}
