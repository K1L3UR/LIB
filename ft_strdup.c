/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnduran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 21:58:05 by arnduran          #+#    #+#             */
/*   Updated: 2019/01/28 17:57:59 by arnduran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s1;
	int		i;

	i = ft_strlen(s);
	if (!(s1 = (char *)malloc(sizeof(char) * (i + 1))))
		return (0);
	while (i >= 0)
	{
		s1[i] = s[i];
		i--;
	}
	return (s1);
}
