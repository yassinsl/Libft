#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	return (NULL);
}

/*
#include <stdio.h>

//#include <string.h>

int	main(void)
{
	const char	*str = "hello";
	char		ch;
	char		*result;

	ch = 'e';
	result = ft_strchr(str, ch);
	printf("Character '%s'", result);
	return (0);
}*/
