#include "libft.h"

char	*new_string(char *s1, int start, int len)
{
	int		i;
	char	*str;

	i = 0;
	str = malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s1[i + start];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	ft_check(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;

	if (!s1 || !set)
		return (ft_strdup(""));
	start = 0;
	end = ft_strlen((char *)s1) - 1;
	if (end == 0)
		return (ft_strdup(""));
	while (ft_check(s1[start], set))
		start++;
	while (ft_check(s1[end], set))
		end--;
	if (start >= end)
		return (ft_strdup(""));
	return (new_string((char *)s1, start, end - start + 1));
}
