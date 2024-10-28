/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:03:43 by ylahssin          #+#    #+#             */
/*   Updated: 2024/10/26 09:03:45 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	unsigned int	i;
	char			*s1;

	if (!s || !f)
		return (NULL);
	len = ft_strlen((char *)s);
	i = 0;
	s1 = malloc(sizeof(char) * (len + 1));
	if (!s1)
		return (NULL);
	while (i < len)
	{
		s1[i] = (*f)(i, s[i]);
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
/*
#include <stdio.h>
#include <stdlib.h>

char	my_func(unsigned int i, char c) {
	return (c + i);  // Example: Shift character by its index
}

char	to_upper(unsigned int i, char c) {
	(void)i;  // Ignoring the index
	if (c >= 'a' && c <= 'z')
		return (c - 32);  // Convert to uppercase
	return (c);
}

char	reverse_case(unsigned int i, char c) {
	(void)i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);  // Convert to uppercase
	else if (c >= 'A' && c <= 'Z')
		return (c + 32);  // Convert to lowercase
	return (c);
}

int	main(void) {
	// Test 1: Basic string with my_func
	char *result1 = ft_strmapi("abcd", my_func);
	if (result1) {
		printf("Test 1 - Result: %s\n", result1);
		free(result1);
	}

	// Test 2: Convert to uppercase
	char *result2 = ft_strmapi("hello world", to_upper);
	if (result2) {
		printf("Test 2 - Result: %s\n", result2);
		free(result2);
	}

	// Test 3: Reverse case
	char *result3 = ft_strmapi("HeLLo WoRLD", reverse_case);
	if (result3) {
		printf("Test 3 - Result: %s\n", result3);
		free(result3);
	}

	// Test 4: Empty string
	char *result4 = ft_strmapi("", my_func);
	if (result4) {
		printf("Test 4 - Result: \"%s\"\n", result4);
		free(result4);
	}

	// Test 5: NULL string input
	char *result5 = ft_strmapi(NULL, my_func);
	if (result5 == NULL) {
		printf("Test 5 - Result: NULL (expected)\n");
	}

}*/
