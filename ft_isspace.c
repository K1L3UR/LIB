/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnduran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 19:22:24 by arnduran          #+#    #+#             */
/*   Updated: 2019/01/28 19:22:32 by arnduran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c)
{
	if (ft_blank(c) != -1)
		return (c);
	else if (c == '\r')
		return (c);
	else if (c == '\v')
		return (c);
	else if (c == '\f')
		return (c);
	return (-1);
}
