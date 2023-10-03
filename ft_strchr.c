/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagomed <bagomedovjusuf@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:38:50 by jbagomed          #+#    #+#             */
/*   Updated: 2023/09/29 17:39:19 by jbagomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char	*ft_strchr(const char *s, int c)
{
	char *str;

	str = (char *)s;

	while (*str != c)
	{
		if(*str == '\0')
			return(str);
		str++;
	}
	return (str);
}*/
char *ft_strchr(const char *s, int c)
{
    while (*s != '\0')
    {
        if (*s == (char)c)
            return (char *)s;
        s++;
    }
    if (*s == (char)c)
        return (char *)s;
    return (0);
}

/*int main()
{
	char *target = "hello world!";
	int	lf = 'a';

	printf("%s\n",ft_strchr(target, lf));
}
*/
