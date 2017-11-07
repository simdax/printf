#include "../../ft_list.h"
#include "../../ex00/ft_create_elem.c"
#include "../../ex02/ft_list_push_front.c"
#include <unistd.h>

void   ft_list_push_front(t_list **begin_list, void *data);
t_list *ft_create_elem(void *data);
void ft_list_foreach(t_list *begin_list, void (*f)(void *));

void		add_one(void *a)
{
	a = (int*)malloc(sizeof(int));
	*(int*)a = 12;
}

int main()
{
	t_list	*list;
	int a = 1;
	int b = 2;
	int c = 4;

	list = ft_create_elem(&a);
	ft_list_push_front(&list, &b);
	ft_list_push_front(&list, &c);
	ft_list_foreach(list, &add_one);
    while (list)
    {
		printf("%d\n", (int)list->data);
		list = list->next;
    }
}
