/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagomed <bagomedovjusuf@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:19:29 by jbagomed          #+#    #+#             */
/*   Updated: 2023/10/03 15:26:05 by jbagomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*size_t	ft_wcount(const char *s, char c)
{
	size_t	ct;

	ct = 0;
	if (!*s)
		return (0);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			ct++;
		while (*s != c && *s)
			s++;
	}
	return (ct);
}*/
/*
static void free_array(size_t i, char **array)
{
	while (i > 0)
	{
		i--;
		free(*(array + i));
	}
	free(array);
}
char	**ft_split(char const *s, char c)
{
	char	**ss;
	int		i;
	size_t	len;

	i = 0;
	if(!(ss = (char **)malloc((ft_wcount(s, c) + 1) * sizeof(char *))) || !s)
		return (0);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				len = ft_strlen(s);
			else
				len = ft_strchr(s, c) - s;
			ss[i] = ft_substr(s, 0, len);
			if (!ss[i])
			{
				free_array(i, ss);
				return(0);
			}
			i++;
			s += len;
		}
	}
	ss[i] = NULL;
	return (ss);
}*/

#include "libft.h"

static size_t	w_count(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (*(s + i))
	{
		if (*(s + i) != c)
		{
			count++;
			while (*(s + i) && *(s + i) != c)
				i++;
		}
		else if (*(s + i) == c)
			i++;
	}
	return (count);
}

static size_t	get_w_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*(s + i) && *(s + i) != c)
		i++;
	return (i);
}

static void	free_array(size_t i, char **array)
{
	while (i > 0)
	{
		i--;
		free(*(array + i));
	}
	free(array);
}

static char	**split(char const *s, char c, char **array, size_t w_len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < w_len)
	{
		while (*(s + j) && *(s + j) == c)
			j++;
		*(array + i) = ft_substr(s, j, get_w_len(&*(s + j), c));
		if (!*(array + i))
		{
			free_array(i, array);
			return (NULL);
		}
		while (*(s + j) && *(s + j) != c)
			j++;
		i++;
	}
	*(array + i) = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	words;

	if (!s)
		return (NULL);
	words = w_count(s, c);
	array = (char **)malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	array = split(s, c, array, words);
	return (array);
}

/*
int main()
{
    char const *s = "This is a test string for split function";
    char c = ' ';
    char **result = ft_split(s, c);
	int i;
    if (!result)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    i = 0;
    while (result[i] != NULL)
    {
        printf("Word %d: %s\n", i + 1, result[i]);
        i++;
    }
    // Освобождаем выделенную память
    i = 0;
    while (result[i] != NULL)
    {
        free(result[i]);
        i++;
    }
    free(result);

    return 0;
}
*/
