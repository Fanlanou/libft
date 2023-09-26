/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagomed <bagomedovjusuf@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 13:07:37 by jbagomed          #+#    #+#             */
/*   Updated: 2023/09/25 15:27:47 by jbagomed         ###   ########.fr       */
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
	while (nptr[i] == ' ' || (nptr[i] >= 07 && nptr[i] <= 13))
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
int main(void)
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

    char d[] = "words and 987";
    printf("%d\n", ft_atoi(d));
	printf("%d\n", atoi(d));

    return (0);
}
*/
