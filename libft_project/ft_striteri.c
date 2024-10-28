/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:39:28 by ylahssin          #+#    #+#             */
/*   Updated: 2024/10/25 12:49:31 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>

//#include <ctype.h>

void	to_upper(unsigned int i, char *c)
{
	(void)i; // Ignoring the index
	if (*c >= 'a' && *c <= 'z')
	{
		*c = *c - 32; // Convert to uppercase
	}
}

void	add_index(unsigned int i, char *c)
{
	*c = *c + i; // Shift character by its index
}

void	reverse_case(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32; // Convert to uppercase
	else if (*c >= 'A' && *c <= 'Z')
		*c = *c + 32; // Convert to lowercase
}

int	main(void)
{
	char	str1[];
	char	str2[];
	char	str3[];
	char	str4[];
	char	*str5;
	char	str6[];

	str1[] = "hello world";
	str2[] = "abcd";
	str3[] = "HeLLo WoRLD";
	str4[] = "";
	str6[] = "test";
	// Test 1: Basic string with to_upper
	ft_striteri(str1, to_upper);
	printf("Test 1 - Result: %s\n", str1); // Should print "HELLO WORLD"
	// Test 2: Add index to each character
	ft_striteri(str2, add_index);
	printf("Test 2 - Result: %s\n", str2); // Should print "aceg"
	// Test 3: Reverse case
	ft_striteri(str3, reverse_case);
	printf("Test 3 - Result: %s\n", str3); // Should print "hEllO wOrld"
	// Test 4: Empty string
	ft_striteri(str4, to_upper);
	printf("Test 4 - Result: \"%s\"\n", str4); // Should print an empty string
	// Test 5: NULL string input
	str5 = NULL;
	ft_striteri(str5, to_upper); // Should do nothing, no crash
	// Test 6: NULL function input
	ft_striteri(str6, NULL);               // Should do nothing, no crash
	printf("Test 6 - Result: %s\n", str6); // Should print "test"
	return (0);
}
*/
