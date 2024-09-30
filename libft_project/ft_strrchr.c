#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	idx;

	idx = ft_strlen((char *)str) - 1;
	if (c == '\0')
		return ((char *)(str + ft_strlen((char *)str)));
	while (idx >= 0)
	{
		if (str[idx] == (char)c)
			return ((char *)(str + idx));
		idx--;
	}
	return (NULL);
}
