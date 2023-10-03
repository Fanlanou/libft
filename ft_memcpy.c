/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagomed <bagomedovjusuf@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:37:34 by jbagomed          #+#    #+#             */
/*   Updated: 2023/10/03 17:25:32 by jbagomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t		i;
	char		*char_dest;
	char		*char_src;

	char_dest = (char *) dest;
	char_src = (char *) src;
	i = 0;
	if (src == NULL && dest == NULL)
		return (NULL);
	while (i < len)
	{
		char_dest[i] = char_src[i];
		i++;
	}
	return (dest);
}

/*int main ()
{
    char src[] = "copy this";
    char dest[30];

    char *dest_ptr = ft_memcpy(dest, src, sizeof(src) + 1);
    printf("src: %s\n", src);
    printf("dest: %s\n", dest);

    printf("dest_ptr: %s\n", dest_ptr);
    printf("dest: %s\n", dest);
}
*/
