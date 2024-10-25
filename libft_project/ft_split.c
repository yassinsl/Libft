#include "libft.h"

char	*ft_word(char *word, char *str, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

int	ft_count_word(const char *word, char c)
{
	int	is_word;
	int	count;

	is_word = 0;
	count = 0;
	while (*word)
	{
		if (*word == c)
			is_word = 0;
		else if (!is_word && *word != c)
		{
			count++;
			is_word = 1;
		}
		word++;
	}
	return (count);
}

char	**ft_allocate_result(char const *s, char c)
{
	char	**result;
	int		total_word;

	if (!s)
	{
		result = malloc(sizeof(char *));
		if (result == NULL)
			return (NULL);
		result[0] = NULL;
		return (result);
	}
	total_word = ft_count_word(s, c);
	result = malloc(sizeof(char *) * (total_word + 1));
	if (result == NULL)
		return (NULL);
	return (result);
}

char	**ft_fill_result(char **result, char const *s, char c)
{
	char	*str;
	char	*start;
	int		pos;
	char	*word;

	str = (char *)s;
	pos = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str == '\0')
			break ;
		start = str;
		while (*str && *str != c)
			str++;
		word = malloc((str - start + 1) * sizeof(char));
		if (word == NULL)
			return (NULL);
		result[pos] = ft_word(word, start, str - start);
		pos++;
	}
	result[pos] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
    if(!s)
        return(NULL);
	result = ft_allocate_result(s, c);
	if (result == NULL)
		return (NULL);
	result = ft_fill_result(result, s, c);
	if (result == NULL)
		return (NULL);
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	char	**result;
	int		i;

	// Test 1: Basic split
	result = ft_split("Hello World from 42", ' ');
	printf("Test 1:\n");
	for (i = 0; result[i] != NULL; i++)
		printf("Result[%d]: '%s'\n", i, result[i]);
	free(result);
	// Test 2: Split with multiple delimiters
	result = ft_split("abc,,def,,ghi", ',');
	printf("\nTest 2:\n");
	for (i = 0; result[i] != NULL; i++)
		printf("Result[%d]: '%s'\n", i, result[i]);
	free(result);
	// Test 3: No delimiters in the string
	result = ft_split("NoDelimitersHere", ',');
	printf("\nTest 3:\n");
	for (i = 0; result[i] != NULL; i++)
		printf("Result[%d]: '%s'\n", i, result[i]);
	free(result);
	// Test 4: Delimiter at the start and end
	result = ft_split(",Hello,World,", ',');
	printf("\nTest 4:\n");
	for (i = 0; result[i] != NULL; i++)
		printf("Result[%d]: '%s'\n", i, result[i]);
	free(result);
	// Test 5: String with only delimiters
	result = ft_split(",,,,,", ',');
	printf("\nTest 5:\n");
	for (i = 0; result[i] != NULL; i++)
		printf("Result[%d]: '%s'\n", i, result[i]);
	free(result);
	// Test 6: Empty string input
	result = ft_split("", ',');
	printf("\nTest 6:\n");
	for (i = 0; result[i] != NULL; i++)
		printf("Result[%d]: '%s'\n", i, result[i]);
	free(result);
	// Test 7: Null input string
	result = ft_split(NULL, ',');
	printf("\nTest 7: Result should be NULL.\n");
	if (result == NULL)
		printf("Result is NULL as expected.\n");
	return (0);
}*/
