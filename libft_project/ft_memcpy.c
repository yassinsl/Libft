void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned char		*d;
	const unsigned char	*s = src;
	unsigned int		i;

	d = dest;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>

//#include <string.h>

int	main(void)
{
	char	src[] = "Hello, World!";
	char	dest[20];

	// Copy 13 bytes from src to dest
	ft_memcpy(dest, src, sizeof(src));
	printf("Destination: %s\n", dest);
	return (0);
}
*/
