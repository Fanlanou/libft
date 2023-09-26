/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagomed <bagomedovjusuf@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:49:58 by jbagomed          #+#    #+#             */
/*   Updated: 2023/09/25 22:49:41 by jbagomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (dest == src)
		return(dest);
	if (d > s)
	{
		while (n > 0)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
	}
	else
		/*while (n > i)
		{
			d[i] = s[i];
			i++;
		}*/
	ft_memcpy(dest, src, n);
	return (dest);
}

/*#include <string.h>

int	main()
{
	char my_str[] = "abcdefghijklmn";
	char my_dst[] = "0123456789";
	char str[] = "abcdefghijklmn";
	char dst[] = "0123456789";


	ft_memmove(my_dst+2, my_str, 5);
	memmove(dst+2, str, 5);
	printf("%s\n%s\n", my_dst, dst);
	return 0;
}
*/
