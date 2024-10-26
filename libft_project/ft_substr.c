/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:33:14 by ylahssin          #+#    #+#             */
/*   Updated: 2024/10/25 18:54:55 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	total_len;

	if (!s)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
	{
		result = (char *)(malloc(sizeof(char)));
		if (!result)
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	total_len = ft_strlen((char *)(s + start));
	if (total_len > len)
		total_len = len;
	result = (char *)(malloc(sizeof(char) * (total_len + 1)));
	if (!result)
		return (NULL);
	ft_strlcpy(result, (char *)(s + start), total_len + 1);
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*str;

	str = "yassin lahssini",*strsub;
    if (!(strsub = ft_substr(str, 0, 10)))
        printf("NULL");
    else
        printf( "%s\n", strsub);
    if (str == strsub)
        printf("\nA new string was not returned");
}
*/
/*
#include <stdio.h>

int	main(void) {
	char *result;

	// Test 1: Normal case
	result = ft_substr("Hello, World!", 7, 5);
	printf("Test 1: %s\n", result); // Expected: "World"
	free(result);

	// Test 2: Start index out of bounds
	result = ft_substr("Hello, World!", 20, 5);
	printf("Test 2: %s\n", result); // Expected: ""
	free(result);

	// Test 3: Len exceeds the string length from start
	result = ft_substr("Hello, World!", 7, 50);
	printf("Test 3: %s\n", result); // Expected: "World!"
	free(result);

	// Test 4: Start index at the last character
	result = ft_substr("Hello, World!", 12, 1);
	printf("Test 4: %s\n", result); // Expected: "!"
	free(result);

	// Test 5: Empty string
	result = ft_substr("", 0, 10);
	printf("Test 5: %s\n", result); // Expected: ""
	free(result);

	// Test 6: Start index in the middle of the string
	result = ft_substr("Hello, World!", 4, 3);
	printf("Test 6: %s\n", result); // Expected: "o, "
	free(result);

	// Test 7: Start index at the start of the string
	result = ft_substr("Hello, World!", 0, 5);
	printf("Test 7: %s\n", result); // Expected: "Hello"
	free(result);

	return (0);
}*/
