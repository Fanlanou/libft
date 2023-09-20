/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagomed <bagomedovjusuf@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:14:33 by jbagomed          #+#    #+#             */
/*   Updated: 2023/09/18 15:19:17 by jbagomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*buf;
	char	*str;
	int		beg;
	int		end;
	int		count;

	count = 0;
	beg = 0;
	end = ft_strlen(s1);
	while (s1[beg] == set[beg])
		beg++;
	while (s1[end - 1] == set[count])
	{
		end--;
		count++;
	}
	count = 0;
	buf = (char *)malloc(end - beg + 1);
	if (!buf)
		return (NULL);
	while (end > beg)
	{
		buf[count] = s1[beg];
		count++;
		beg++;
	}
	ft_strlcpy (s1, buf, end - beg + 1);
	return (s1);
}

#include <stdio.h>
#include <unistd.h>
#include <string.h>


int main()
{
  char *a = "ehello, World!e";
  char *b = "e";
  char *c;

  ft_strtrim(a, b);
  printf("trimmed string: %s,\n", c);
}
