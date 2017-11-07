#include "../../ft_list.h"
#include "../../ex00/ft_create_elem.c"
#include "../../ex02/ft_list_push_front.c"
#include <unistd.h>

void   ft_list_push_front(t_list **begin_list, void *data);
t_list *ft_create_elem(void *data);
int		ft_list_size(t_list *begin_list);

int main()
{
	t_list	*list;

	list = ft_create_elem("coucou");
	ft_list_push_front(&list, "toi");
	ft_list_push_front(&list, "lui");
	printf("%d", ft_list_size(list));
}
