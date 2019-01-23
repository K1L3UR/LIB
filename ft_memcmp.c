/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnduran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 21:25:40 by arnduran          #+#    #+#             */
/*   Updated: 2019/01/23 23:35:33 by arnduran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;
	
	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	while (i < n)
		i++;
	return (ft_strcmp(str1, str2));
}
