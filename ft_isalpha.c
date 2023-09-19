/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:03:08 by jbagomed          #+#    #+#             */
/*   Updated: 2023/09/04 14:34:12 by jbagomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(char a)
{
	if (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z')
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	c;
	int		result;

	c = 'a'
	result = ft_isalpha(c);
	printf("%d\n", result);
	return 0;
}
*/
