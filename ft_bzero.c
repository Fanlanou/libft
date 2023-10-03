/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagomed <bagomedovjusuf@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 11:13:14 by vvilensk          #+#    #+#             */
/*   Updated: 2023/10/03 16:01:39 by jbagomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stddef.h"

void	ft_bzero(void *dest, size_t n)
{
	char	*buf;

	buf = (char *)dest;
	while (n > 0)
	{
		*buf = '\0';
		buf++;
		n--;
	}
	dest = buf;
}
