/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagomed <bagomedovjusuf@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:07:24 by jbagomed          #+#    #+#             */
/*   Updated: 2023/09/16 00:57:52 by jbagomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	//char	*b = (char *)big;
	//char	*l = (char *)little;
	size_t			bl = ft_strlen((char *)big);
	size_t			ll = ft_strlen((char *)little);

	if (ll == 0)
		return ((char *)big);
	if (bl < ll)
		return (0);
	while (len-- >= ll)
	{
		if (ft_memcmp(big, little, ll) == 0)
			return ((char *)big);
		big++;
	}
	return (0);
}

int main()
{
	char	*s1 ="hello world!";
	char	*s2 = "orl";
	size_t	n =10;
	printf("%s\n",ft_strnstr(s1, s2, n));
	printf("%s\n",strnstr(s1, s2, n));
}
