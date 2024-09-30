#include "fcntl.h"
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (fd == -1)
		return ;
	while (*s)
		write(fd, s++, 1);
}
/*
int	main(void)
{
	int fd = open("yassin.txt", O_WRONLY | O_CREAT,0644);

	ft_putstr_fd("Welcome Yassin", fd);
	close(fd);
}*/
