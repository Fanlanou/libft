/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagomed <bagomedovjusuf@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:55:17 by jbagomed          #+#    #+#             */
/*   Updated: 2023/09/26 01:31:02 by jbagomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t ld;
	size_t ls;
	size_t sum;
	size_t i;

	ld = ft_strlen(dest);
	ls = ft_strlen(src);
	sum = 0;
	if (size > ld)
		sum = ls + ld;
	else
		sum = ls + size;
	i = 0;
	while (src[i] && ld <= size)
	{
		dest[ld] = src[i];
		ld++;
		i++;
	}
	dest[ld] = '\0';
	return (sum);
}
*/
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dest_size;
	size_t	count;
	size_t	src_size;

	if ((dst == NULL || src == NULL) && size == 0)
		return (0);
	count = 0;
	dest_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	if (size == 0)
		return (size + src_size);
	while ((src[count] != '\0') && (count + dest_size < size - 1))
	{
		dst[dest_size + count] = src[count];
		count++;
	}
	dst[dest_size + count] = '\0';
	if (dest_size < size)
		return (dest_size + src_size);
	return (size + src_size);
}
/*
int main()
{
	char d[14] = "a";
	char *s = "lorem ipsum dolor sit amet";
	// size_t sum = ft_strlcat(d, s, 35);
	printf("lenght: %zu\n", ft_strlcat(d, s, 15));
	printf("destin: %s\n", d);
}
*/
