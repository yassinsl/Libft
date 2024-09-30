void	*ft_memset(void *ptr, int value, unsigned int num)
{
	unsigned int	i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)ptr;
	while (i < num)
	{
		p[i] = (unsigned char)value;
		i++;
	}
	return (p);
}
