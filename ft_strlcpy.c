/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagomed <bagomedovjusuf@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:11:29 by jbagomed          #+#    #+#             */
/*   Updated: 2023/10/03 17:28:34 by jbagomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t		i;

	i = 0;
	if (n == 0)
		return (ft_strlen((char *)src));
	while (src[i] != '\0' && i < (n - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen((char *)src));
}

/*
int	main(void)
{
	char	d[100] = "EXAMPLE";
	char	*s;
	int	size = 5;

	s = "0123456789";
	printf("before:%s\n", d);
	printf("length:%zu\n", ft_strlcpy(d, s, size));
	printf("after: %s\n", d);
	strlcpy(d, s, size);
	printf("orig strlcp: %u\n", strlcpy(d, s, size));
	printf("%s\n", d);
	printf("For francinette: %zu\n", ft_strlcpy(d,
	"lorem ipsum dolor sit amet", 0));
	printf("orig francinette: %u\n", strlcpy(d, "lorem ipsum dolor sit amet", 0));
	return (0);
}
*/
