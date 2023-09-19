/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagomed <bagomedovjusuf@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:55:17 by jbagomed          #+#    #+#             */
/*   Updated: 2023/09/13 12:18:30 by jbagomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	sumlen;
	size_t	i;

	i = 0;
	sumlen = ft_strlen(dst) + ft_strlen ((char *)src);
	if (size <= ft_strlen(dst))
		return (size + ft_strlen((char *)src));
	while (i < size - (sumlen - ft_strlen((char *)src) - 1))
	{
		dst[ft_strlen(dst) + i] = src[i];
		i++;
	}
	dst[ft_strlen(dst) + i] = '\0';
	return (sumlen);
}

int	main()
{
	char d[50] = "this is test";
	char s[50] = "do not try it at home";
	//size_t sum = ft_strlcat(d, s, 35);
	printf("lenght: %zu\n", ft_strlcat(d, s, 40));
	printf("destin: %s\n", d);
}
