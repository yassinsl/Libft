void	ft_bzero(void *s, unsigned int len)
{
	unsigned char	*s1;

	s1 = s;
	while (len > 0)
		s1[--len] = 0;
}
/*
#include <stdio.h>

int	main(void)
{
	int	arr[10] = {1, 3, 5, 6, 7, 8, 9, 9};

	ft_bzero(arr, sizeof(arr));
	for (int i = 0; i < 10; i++)
		printf("%d", arr[i]);
	return (0);
}
*/
