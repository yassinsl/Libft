#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
 *
int	main(void)
{
	char	*src;
	char	dest[3];

	src = "yassin";
	printf("%d %s", ft_strlcpy(dest, src, 3), dest);
}
*/
