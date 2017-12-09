#include "chained_list.h"

void	swap(t_list *elem)
{
  int val;
  
  val = *(int*)elem->next->content;
  elem->next->content = elem->content;
  elem->content = &val;
}

void	del(void *data, size_t size)
{
  (void)size;
  free(data);
}

/* void	push(t_list *l_a, t_list *l_b, int val) */
/* { */
/*   t_list *new; */
/*   t_list *tmp; */

/*   new = ft_lstnew(&val, sizeof(int)); */
/*   new->next = l_b; */
/* } */

/* void	rotate(t_list *l) */
/* { */
/*   t_list *first; */

/*   first = l; */
/*   while (l) */
/*     { */
/*       l = l->next; */
/*     } */
  
/* } */
