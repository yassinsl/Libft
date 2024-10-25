#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)) 
{
    t_list *new_lst = NULL;
    t_list *new_elem;

    while (lst) 
    {
        new_elem = ft_lstnew(f(lst->content));
        if (!new_elem) 
        {
            ft_lstclear(&new_lst, del);
            return NULL;
        }
        ft_lstadd_back(&new_lst, new_elem);
        lst = lst->next;
    }
    return new_lst;
}
