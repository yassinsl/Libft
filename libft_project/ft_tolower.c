/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:30:07 by ylahssin          #+#    #+#             */
/*   Updated: 2024/10/26 09:30:11 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
