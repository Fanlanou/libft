/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagomed <bagomedovjusuf@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:40:41 by jbagomed          #+#    #+#             */
/*   Updated: 2023/10/03 16:17:50 by jbagomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (unsigned char)c)
			return ((char *)&s[len]);
		len--;
	}
	return (0);
}
/*int main()
{
	char *target = "hello world!";
	int	lf = 'o';
	char *test = "teste";
	int t1 = '\0';

	printf("%s\n",ft_strrchr(target, lf));
	printf("%p\n",ft_strrchr(test, t1));
}
*/
