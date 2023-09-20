/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset!!!!.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagomed <bagomedovjusuf@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:03:08 by jbagomed          #+#    #+#             */
/*   Updated: 2023/09/17 14:57:37 by jbagomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *str, int ch, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	while (n > 0)
	{
		*ptr = (unsigned char)ch;
		ptr++;
		n--;
	}
	return (str);
}

/*int main()
{
	char numbers[100];

	unsigned char *ptr;
	ptr = (unsigned char *)numbers;
	ft_memset(ptr, 'a', sizeof(numbers));

	for(int i = 0; i < sizeof(numbers); i++)
	  printf("%c ",numbers[i]);
	printf ("\n");
	return (0);
}
*/
