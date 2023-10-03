/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagomed <bagomedovjusuf@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:01:59 by jbagomed          #+#    #+#             */
/*   Updated: 2023/10/03 16:06:42 by jbagomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	getlen(int num)
{
	size_t	len;

	len = 0;
	if (num == 0)
		len++;
	while (num != 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

// исправил на long int внизу

char	*ft_itoa(int n)
{
	long int	nb;
	int			nlen;
	char		*strnb;

	nlen = getlen(n);
	nb = n;
	if (n < 0)
	{
		nb *= -1;
		nlen++;
	}
	strnb = malloc (sizeof(char) * (nlen + 1));
	if (!strnb)
		return (NULL);
	strnb[nlen] = '\0';
	while (nlen--)
	{
		strnb[nlen] = nb % 10 + '0';
		nb /= 10;
	}
	if (n < 0)
		strnb[0] = '-';
	return (strnb);
}

/*int      main()
{
int d = -2147483648;
printf("%d =? %s\n", d, ft_itoa(d));
}
*/
