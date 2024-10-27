/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:01:15 by ylahssin          #+#    #+#             */
/*   Updated: 2024/10/26 09:01:17 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	result = malloc((ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		result[j++] = s1[i++];
	i = 0;
	while (s2[i])
		result[j++] = s2[i++];
	result[j] = '\0';
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*s2;
	char	*result;

	// Test 1: Basic concatenation
	s1 = "Hello, ";
	s2 = "World!";
	result = ft_strjoin(s1, s2);
	if (result)
	{
		printf("Test 1 - Result: %s\n", result);
		free(result);
	}
	else
	{
		printf("Test 1 - ft_strjoin returned NULL\n");
	}
	// Test 2: Empty first string
	s1 = "";
	s2 = "Test";
	result = ft_strjoin(s1, s2);
	if (result)
	{
		printf("Test 2 - Result: %s\n", result);
		free(result);
	}
	else
	{
		printf("Test 2 - ft_strjoin returned NULL\n");
	}
	// Test 3: Empty second string
	s1 = "Test";
	s2 = "";
	result = ft_strjoin(s1, s2);
	if (result)
	{
		printf("Test 3 - Result: %s\n", result);
		free(result);
	}
	else
	{
		printf("Test 3 - ft_strjoin returned NULL\n");
	}
	// Test 4: Both strings empty
	s1 = "";
	s2 = "";
	result = ft_strjoin(s1, s2);
	if (result)
	{
		printf("Test 4 - Result: %s\n", result);
		free(result);
	}
	else
	{
		printf("Test 4 - ft_strjoin returned NULL\n");
	}
	// Test 5: First string is NULL
	s1 = NULL;
	s2 = "Test";
	result = ft_strjoin(s1, s2);
	if (result)
	{
		printf("Test 5 - Result: %s\n", result);
	}
	else
	{
		printf("Test 5 - ft_strjoin returned NULL\n");
	}
	// Test 6: Second string is NULL
	s1 = "Test";
	s2 = NULL;
	result = ft_strjoin(s1, s2);
	if (result)
	{
		printf("Test 6 - Result: %s\n", result);
	}
	else
	{
		printf("Test 6 - ft_strjoin returned NULL\n");
	}
	// Test 7: Both strings are NULL
	s1 = NULL;
	s2 = NULL;
	result = ft_strjoin(s1, s2);
	if (result)
	{
		printf("Test 7 - Result: %s\n", result);
	}
	else
	{
		printf("Test 7 - ft_strjoin returned NULL\n");
	}
	return (0);
}
*/
