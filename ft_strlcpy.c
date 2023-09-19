/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagomed <bagomedovjusuf@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:11:29 by jbagomed          #+#    #+#             */
/*   Updated: 2023/09/12 13:53:31 by jbagomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	int		i;

	i = 0;
	while (src[i] != '\0' && i < (n - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen((char *)src));
}

int	main(void)
{
	char	d[100];
	char	*s;
	int	size = 5;

	s = "abcdefghigklmnop";
	printf("before:%s\n", d);
	printf("length:%zu\n", ft_strlcpy(d, s, size));
	printf("after: %s\n", d);
	strlcpy(d, s, size);
	/*printf("%u orig strlcp:\n", strlcpy(d, s, size));
	printf("%s,            :\n", d);*/
	return (0);
}
