/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagomed <bagomedovjusuf@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:01:59 by jbagomed          #+#    #+#             */
/*   Updated: 2023/09/25 22:35:26 by jbagomed         ###   ########.fr       */
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

char	*ft_itoa(int n)
{
	char	*strnb;
	int		nb;
	size_t		nlen;

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

/*char			*ft_itoa(int n)
{
	char		*str_num;
	size_t		digits;
	long int	num;

	num = n;
	digits = getlen(n);
	if (n < 0)
	{
		num *= -1;
		digits++;
	}
	if (!(str_num = (char *)malloc(sizeof(char) * (digits + 1))))
		return (NULL);
	*(str_num + digits) = 0;
	while (digits--)
	{
		*(str_num + digits) = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		*(str_num + 0) = '-';
	return (str_num);
}
*/

/*int      main()
{
int d = 5;
printf("%d =? %s\n", d, ft_itoa(d));
}
*/
