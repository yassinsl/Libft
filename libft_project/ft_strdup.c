#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*result;
	char	*ptr;

	result = malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	ptr = result;
	if (!result)
		return (NULL);
	while (*s)
		*ptr++ = *s++;
	*ptr = '\0';
	return (result);
}
