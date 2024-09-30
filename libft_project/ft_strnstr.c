#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, unsigned int len)
{
	unsigned int	i;
	unsigned int	j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] && haystack[i + j] && (i + j) < len
			&& haystack[i + j] == needle[j])
		{
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
/*i
#include <stdio.h>
#include <string.h>

// Your custom ft_strnstr function here
char	*ft_strnstr(const char *haystack, const char *needle, unsigned int len);

int	main(void)
{
	const char	*big = "Hello, this is a simple test string.";
	const char	*little = "simple";
	size_t		len;
	char		*result_ft;

	len = 20;
	// Test case 1
	result_ft = ft_strnstr(big, little, len);
	// Use your own ft_strnstr or the system-provided strnstr (if available)
	char *result_std = ft_strnstr(big, little, len);
		// Change this to ft_strnstr if using custom
	printf("Test case 1:\n");
	printf("ft_strnstr: %s\n", result_ft ? result_ft : "NULL");
	printf("strnstr: %s\n\n", result_std ? result_std : "NULL");
	return (0);
}*/
