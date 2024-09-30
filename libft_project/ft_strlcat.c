#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	i;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	i = 0;
	if (len_dest >= size)
		return (len_src + size);
	while (src[i] && (i + len_dest < size - 1))
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[i + len_dest] = '\0';
	return (len_dest + len_src);
}
