int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
#include <stdio.h>

int	main(void)
{
	char	upper;
	char	lower;

	upper = '-';
	lower = ft_tolower(upper);
	printf("Original: %c\n", upper);
	printf("Lowercase: %c\n", lower);
	return (0);
}
*/
