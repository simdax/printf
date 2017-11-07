#include "../../ft_list.h"
#include "../../ex00/ft_create_elem.c"
#include "../../ex01/ft_list_push_back.c"
#include "../../ex02/ft_list_push_front.c"
#include <unistd.h>

t_list *ft_list_at(t_list *begin_list, unsigned int nbr);
void   ft_list_push_front(t_list **begin_list, void *data);
t_list *ft_create_elem(void *data);


int main()
{
	t_list	*list;

	list = ft_create_elem("coucou");
	ft_list_push_back(&list, "toi");
	ft_list_push_front(&list, "lui");
	printf("%s\n", ft_list_at(list, 0)->data);
	printf("%s\n", ft_list_at(list, 1)->data);
	printf("%s\n", ft_list_at(list, 2)->data);
}
