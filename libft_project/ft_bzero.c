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
	    char	arr[10] = "mikemok";

	ft_bzero(arr, sizeof(arr));
	for (int i = 0; i < 10; i++)
		printf("%d", arr[i]);
	return (0);
}
*/
