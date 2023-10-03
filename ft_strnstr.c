/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagomed <bagomedovjusuf@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:07:24 by jbagomed          #+#    #+#             */
/*   Updated: 2023/10/03 16:19:46 by jbagomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	bl;
	size_t	ll;

	bl = ft_strlen((char *)big);
	ll = ft_strlen((char *)little);
	if (ll == 0)
		return ((char *)big);
	if (bl < len)
		len = bl;
	while (bl >= ll && len >= ll)
	{
		if (ft_memcmp(big, little, ll) == 0)
			return ((char *)big);
		big++;
		len--;
	}
	return (0);
}*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (*needle == '\0' || needle == NULL)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
			{
				return ((char *)haystack + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

/*int	main ()
{
	const char *bb = "hello world!";
	const char *lit = "worl";

	printf("%s\n", ft_strnstr(bb, lit, 10));
	printf("%s\n", strnstr(bb, lit, 10));
}
*/
