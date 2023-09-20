/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagomed <bagomedovjusuf@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:41:28 by jbagomed          #+#    #+#             */
/*   Updated: 2023/09/18 14:05:37 by jbagomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
#include <stdlib.h>

void	*ft_memset(void *str, int ch, size_t n);
void	*ft_memcpy(void *dest, void *src, size_t len);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	ft_bzero(void *dest, size_t n);
int		ft_isalnum(char a);
int		ft_strlen(const char *str);
char	*ft_strdup(const char *s);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlcpy(char *dst, const char *src, size_t n);
int		ft_isalpha(char a);
int		is_digit(int i);

#endif
