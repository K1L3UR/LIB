/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnduran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 19:23:34 by arnduran          #+#    #+#             */
/*   Updated: 2019/01/28 19:23:35 by arnduran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int b, size_t n)
{
	unsigned char *conv;

	if (n == 0)
		return (ptr);
	conv = (unsigned char*)ptr;
	while (n--)
	{
		*conv = (unsigned char)b;
		if (n)
			conv++;
	}
	return (ptr);
}
