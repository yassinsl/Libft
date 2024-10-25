#include "libft.h"

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned int	i;
	unsigned char	*str;
	unsigned char	sh;

	i = 0;
	str = (unsigned char *)s;
	sh = (unsigned char)c;
	while (i < n && str[i])
	{
		if (str[i] == sh)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

#include <string.h>

int	main(void)
{
	char	buffer[] = "hello";
	char	*found;

	printf("Character %s\n",ft_memchr("hello",'f', 500));
	return (0);
}*/
