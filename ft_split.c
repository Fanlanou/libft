/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagomed <bagomedovjusuf@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:19:29 by jbagomed          #+#    #+#             */
/*   Updated: 2023/09/20 12:28:53 by jbagomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	**ft_wcount(char *s, char c)
{
	size_t	ct;

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
}

char	**ft_split(char const *s, char c)
{
	char	**ss;
	int		i;
	size_t	len;

	ss = (char **)malloc((ft_wcount(s, c) + 1) * sizeof(char *));
	if (!s || !ss)
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
			i++;
			s += len;
		}
	}
	ss[i] = NULL;
	return (ss);
}

int main()
{
	
}
