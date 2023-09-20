/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagomed <bagomedovjusuf@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:26:59 by jbagomed          #+#    #+#             */
/*   Updated: 2023/09/20 11:45:59 by jbagomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*sub;

	i = 0;
	sub = (char *)malloc(len));
	if(!sub)
		return(0);
	while (len > i && s[start] != '\0')
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return(sub);
}
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	char	*pts;

	sub = (char *)malloc (len + 1);
	pts = sub;
	if (!sub)
		return (NULL);
	while (len > 0 && s[start] != '\0')
	{
		*sub = s[start];
		sub++;
		len--;
		start++;
	}
	*sub = '\0';
	return (pts);
}
/*
int	main()
{
	char *a = "hello world!";
	char *b;

	b = ft_substr(a, 3, 3);
	printf("subsring:%s\n", b);
	return(0);
}
*/
