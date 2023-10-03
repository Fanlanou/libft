/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagomed <bagomedovjusuf@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:26:59 by jbagomed          #+#    #+#             */
/*   Updated: 2023/10/03 17:27:24 by jbagomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;
	size_t	j;
	size_t	slen;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > slen - start)
		len = slen - start;
	new_str = (char *)malloc(len + 1);
	if (!new_str)
		return (0);
	i = start;
	j = 0;
	while (i < slen && j < len)
		new_str[j++] = s[i++];
	new_str[j] = '\0';
	return (new_str);
}

/* создаем подстроку, s входная строка, старт это индекс с какого символа
дожна создаваться подстрока, лен ожидаемая длина целевой подстроки.*/
/*char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	char	*pts;

	sub = (char *)malloc (len + 1);
	pts = sub;
	if ((int)start >= ft_strlen(s))
        return ft_strdup("");
	if (!sub)
		return (NULL);
	while (len > 0 && s[start] != '\0')
	{
		*sub = s[start];
		sub++;
		len--;
		start++;
	}
	*sub = '\0';
	return (pts);
}
*/

/*
int	main()
{
	char *a = "hello world!";
	char *b;

	b = ft_substr(a, 3, 3);
	printf("subsring:%s\n", b);
	return(0);
}
*/
