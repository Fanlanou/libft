/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagomed <bagomedovjusuf@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 13:07:37 by jbagomed          #+#    #+#             */
/*   Updated: 2023/09/30 20:29:40 by jbagomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	//while (nptr[i] == ' ' || (nptr[i] >= 07 && nptr[i] <= 13))
	while (nptr[i] == ' ' || nptr[i] == '\n' || nptr[i] == '\t' || nptr[i] == '\v'
			|| nptr[i] == '\f' || nptr[i] == '\r')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	if (nptr[i] >= '0' && nptr[i] <= '9')
	{
		while (nptr[i] >= '0' && nptr[i] <= '9')
		{
			result = result * 10 + (nptr[i] - '0');
			i++;
		}
		return (result * sign);
	}
	return (0);
}
/*
#include "libft.h"

int		ft_atoi(const char *str)
{
	int neg;
	int i;
	int num;

	i = 0;
	neg = 1;
	num = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * neg);
}
*/
/*int main(void)
{
	char	a[] = "12345";
	printf ("%d\n", ft_atoi(a));
	printf ("%d\n", atoi(a));

    char	b[] = "   -987";
    printf ("%d\n", ft_atoi(b));
	printf ("%d\n", atoi(b));

	char c[] = "4193 with words";
    printf("%d\n", ft_atoi(c));
	printf("%d\n", atoi(c));

    char d[] = "\007 8";
    printf("%d\n", ft_atoi(d));
	printf("%d\n", atoi(d));

    return (0);
}
*/
