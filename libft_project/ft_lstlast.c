#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}
/*
#include <stdio.h>

void	print_node(t_list *node) {
	if (node) {
		printf("Node content: %d\n", *(int *)(node->content));
	} else {
		printf("Node is NULL\n");
	}
}

int	main(void)
{
	int		a = 1, b = 2, x;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*last_node;

	a = 1, b = 2, x = 6;
	node1 = ft_lstnew(&a);
	node2 = ft_lstnew(&b);
	node3 = ft_lstnew(&x);
	node1->next = node2;
	node2->next = node3;
	last_node = ft_lstlast(node1);
	print_node(last_node);
	free(node1);
	free(node2);
	free(node3);
	return (0);
}
*/
