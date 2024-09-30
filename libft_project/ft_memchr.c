#include "libft.h"

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned int	i;
	unsigned char	*str;
	unsigned char	sh;

	i = 0;
	str = (unsigned char *)s;
	sh = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == sh)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

//#include <string.h>

int	main(void)
{
	char	buffer[] = "yassin ";
	char	*found;

	found = ft_memchr(buffer, '\0', sizeof(buffer));
	printf("Character '%s\n", found);
	return (0);
}
*/
