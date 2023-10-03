/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagomed <bagomedovjusuf@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:14:33 by jbagomed          #+#    #+#             */
/*   Updated: 2023/10/03 16:18:19 by jbagomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*buf;
	//char	*str;
	int		beg;
	int		end;
	int		count;

	count = 0;
	beg = 0;
	end = ft_strlen(s1);
	while (s1[beg] == set[beg])
		beg++;
	while (s1[end - 1] == set[count])
	{
		end--;
		count++;
	}
	count = 0;
	buf = (char *)malloc(end - beg + 1);
	if (!buf)
		return (NULL);
	while (end > beg)
	{
		buf[count] = s1[beg];
		count++;
		beg++;
	}
	ft_strlcpy ((char *)s1, buf, end - beg + 1);
	return ((char *)buf);
}
*/
// Находим начало обрезанной части
// Находим конец обрезанной части
// Вычисляем длину обрезанной части
// Выделяем память для новой строки и копируем обрезанную часть
#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed_str;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	len = end - start;
	trimmed_str = (char *)malloc(len + 1);
	if (!trimmed_str)
		return (NULL);
	ft_strlcpy(trimmed_str, s1 + start, len + 1);
	return (trimmed_str);
}

/*#include <stdio.h>
#include <unistd.h>
#include <string.h>


int main()
{
  char *a = "ehello, World!e";
  char *b = "e";
  char *c;

  ft_strtrim(a, b);
  printf("trimmed string: %s,\n", c);
}
*/
