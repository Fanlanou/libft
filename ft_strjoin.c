/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagomed <bagomedovjusuf@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:38:18 by jbagomed          #+#    #+#             */
/*   Updated: 2023/09/18 13:12:14 by jbagomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	char	*sum;
	char	*ptf;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	sum = (char *)malloc(s1len + s2len + 1);
	ptf = sum;
	if (!sum)
		return (NULL);
	while (s1len-- > 0)
		*sum++ = *s1++;
	while (*s2)
		*sum++ = *s2++;
	*sum = '\0';
	return (ptf);
}

/*
int main ()
{
	char	*a = "hello, ";
	char	*b = "World!";
	char	*c = ft_strjoin (a, b);

	printf ("concatenated string: %s,\n", c);
	return (0);
}*/
