#include "libft.h"

void	*ft_calloc(unsigned int num, unsigned int size)
{
	unsigned int	i;
	char			*result;

	i = 0;
	result = malloc(size * num);
	if (!result)
		return (NULL);
	while (i < (size * num))
		result[i++] = 0;
	return (result);
}
