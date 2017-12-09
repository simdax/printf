#include "chained_list.h"

t_list	*hydrate(char **chaine)
{
  t_list	*head;
  t_list	*tmp;
  int val;

  val = ft_atoi(*chaine);
  head = ft_lstnew(&val, sizeof(int));
  chaine++;
  tmp = head;
  while (*chaine)
    {
      val = ft_atoi(*chaine);
      tmp->next = ft_lstnew(&val, sizeof(int));
      tmp = tmp->next;
      chaine++;
    }
  //  tmp->next = head;
  return (head);
}

void	add(void *a, void *b)
{
  *(int*)a = *(int*)a + *(int*)b;
}

void	print(t_list *elem)
{
  printf("%d ", *(int*)elem->content);
}

int main(int argc, char **argv)
{
  t_list	*list;

  if (argc < 3)
    {
      return (1);
    }
  argv++;
  list = hydrate(argv);
  char buf[3];
  int ret;
  while ((ret = read(0, buf, 2)))
    {
      printf("%d", ret);
      //      buf[ret] = 0;
      //      ft_lstiter(list, print);
      //      ft_putchar('\n');
      /* swap(list); */
      /* ft_lstiter(list, print); */
      /* ft_putchar('\n'); */
    }
  return (0);
}
