/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:33:53 by ylahssin          #+#    #+#             */
/*   Updated: 2024/10/25 20:52:53 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// char	*new_string(char *s1, int start, int len)
// {
// 	int		i;
// 	char	*str;
//
// 	i = 0;
// 	str = malloc(sizeof(char) * len);
// 	if (!str)
// 		return (NULL);
// 	while (i < len)
// 	{
// 		str[i] = s1[i + start];
// 		i++;
// 	}
// 	str[i] = '\0';
// 	return (str);
// }

// int	ft_check(char c, char const *set)
// {
// 	int	i;
//
// 	i = 0;
// 	while (set[i])
// 	{
// 		if (set[i] == c)
// 			return (1);
// 		i++;
// 	}
// 	return (0);
// }
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;
	int	lenght;

	if (!s1 || !set)
		return (ft_strdup(""));
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	if (!s1[start])
		return (ft_strdup(""));
	end = ft_strlen(s1) - 1;
	while (s1[end] && ft_strchr(set, s1[end]))
		end--;
	lenght = end - start + 1;
	if (lenght <= 0)
		return (ft_strdup(""));
	return (ft_substr((char *)s1, start, lenght));
}
