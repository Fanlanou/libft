/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagomed <bagomedovjusuf@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:19:58 by jbagomed          #+#    #+#             */
/*   Updated: 2023/09/27 00:26:16 by jbagomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;

	copy = (char *)malloc(ft_strlen(s) + 1);
	if (!copy)
		return (NULL);
	ft_memcpy(copy, (void *)s, ft_strlen(s) + 1);
	return (copy);
}

/*
#include <stdio.h>
#include <stdlib.h>


int	main()
{
	const char	*original;
	char		*std_result;
	char		*ft_result;

	original = "Hello, World!";
	std_result = strdup(original);
	ft_result = ft_strdup(original);
	if (std_result != NULL && ft_result != NULL)
	{
		if (strcmp(std_result, ft_result) == 0)
			printf ("ft_strdup works correctly: %s\n", ft_result);
		else
			printf("ft_strdup produced incorrect result\n");
		free (std_result);
		free (ft_result);
	}
	else
	{
		printf("Memory allocation failed\n");
	}
	return (0);
}
*/
