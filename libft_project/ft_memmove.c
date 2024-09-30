#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	char			*d;
	const char		*s = src;
	unsigned int	i;

	d = dest;
	i = 0;
	if (!s || !d)
		return (NULL);
	if (d > s)
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	buffer[20] = "Hello, World!";

	// Overlapping regions
	// Move "World!" within the same buffer
	ft_memmove(buffer + 7, buffer + 7, 7); // Overlap: "World!" starts at buffer
		+ 6 and is moved to buffer + 7
	printf("Result: %s\n", buffer);
	return (0);
}
*/