/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchrORIG.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagomed <bagomedovjusuf@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:58:14 by jbagomed          #+#    #+#             */
/*   Updated: 2023/09/26 22:34:00 by jbagomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{dfg
	int len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == c)
			return ((char*)&s[len]);
		len--;
	}
	return (0);
}
char	*ft_strrchr(const char *str, int c)
{
	int		i;

	i = ft_strlen((char *)str);
	while (i >= 0)
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i--;
	}
	if (i < 0)
		return ((char *)&str[i]);
	return (NULL);
}
/*
int main()
{
	char *target = "hello world!";
	int	lf = 'o';

	printf("%s\n",ft_strrchr(target, lf));
}
*/
