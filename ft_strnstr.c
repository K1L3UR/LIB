/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnduran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 22:34:10 by arnduran          #+#    #+#             */
/*   Updated: 2019/01/28 19:25:23 by arnduran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *to_find, size_t n)
{
	size_t	len;

	len = ft_strlen(to_find);
	while (*s != '\0' && n >= len)
	{
		if (ft_strncmp(s, to_find, len) == 0)
			return ((char*)s);
		s++;
		n--;
	}
	return (NULL);
}
