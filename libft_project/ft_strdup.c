#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*ptr;
	char	*str;

	if (!src)
		return (0);
	ptr = malloc(sizeof(char) * ft_strlen((char *)src) + 1);
	str = ptr;
	if (!ptr)
		return (0);
	while (*src)
	{
		*ptr = *src;
		src++;
		ptr++;
	}
	*ptr = '\0';
	return (str);
}
