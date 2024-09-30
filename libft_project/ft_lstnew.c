#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*tmp;

	if (!content)
		return (NULL);

	tmp = (t_list *)(malloc(sizeof(t_list)));
	if (!tmp)
		return (NULL);

	tmp->content = content;
	tmp->next = 0;
	return (tmp);
}

/*
#include <stdio.h>

int	main(void)
{
	t_list	*node1;
	int		content1[2] = {42, 10};

	// Example 1: Node with an integer
	node1 = ft_lstnew(content1);
	printf("Node 1 content (int): %d\n", ((int *)(node1->content))[0]);
	printf("Node 1 next: %p\n\n", (void *)node1->next);
}
*/
