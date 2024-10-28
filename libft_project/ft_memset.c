/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:39:23 by ylahssin          #+#    #+#             */
/*   Updated: 2024/10/25 12:44:23 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
