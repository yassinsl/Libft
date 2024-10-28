/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:39:23 by ylahssin          #+#    #+#             */
/*   Updated: 2024/10/26 07:04:09 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	char	*result;

	result = malloc(nmemb * size);
	if (!result)
		return (NULL);
	i = 0;
	while (i < (nmemb * size))
		result[i++] = 0;
	return (result);
}
