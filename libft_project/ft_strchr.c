#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	ch;
	int		i;

	ch = c;
	i = 0;
	while (str[i])
	{
		if (str[i] == ch)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == ch)
		return ((char *)&str[i]);
	return (NULL);
}
/*
#include <stdio.h>

//#include <string.h>

int	main(void)
{
	const char	*str = "";
	char		ch;
	char		*result;

	ch = '\0';
	result = ft_strchr(str, ch);
	printf("Character '%s'", result);
	return (0);
}
*/
