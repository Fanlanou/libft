/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagomed <bagomedovjusuf@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 14:07:07 by jbagomed          #+#    #+#             */
/*   Updated: 2023/10/03 16:18:53 by jbagomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb * size / size != nmemb)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == 0)
		return (0);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

/*int	main(void)
{
	int	*arr;
	int	*dst;

	arr = (int *)ft_calloc(5, sizeof (int));
	dst = (int *)calloc(5, sizeof (int));
	if (arr != NULL || dst != NULL)
	{
		printf("%ls\n", arr);
		printf("%ls\n", dst);
		free(arr);
		free(dst)
	}
		return (0);
	}
*/
