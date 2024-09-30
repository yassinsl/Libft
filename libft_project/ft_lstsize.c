#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	if (!lst)
		return (-1);
	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
/*
int	main(void)
{
	int		a = 1, b = 2, c;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	int		size;

	a = 1, b = 2, c = 3;
	node1 = ft_lstnew(&a);
	node2 = ft_lstnew(&b);
	node3 = ft_lstnew(&c);
	node1->next = node2;
	node2->next = node3;
	size = ft_lstsize(node1);
	printf("Size of the list: %d\n", size);
	free(node1);
	free(node2);
	free(node3);
}
*/
