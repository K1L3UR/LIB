/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnduran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 19:36:03 by arnduran          #+#    #+#             */
/*   Updated: 2019/01/29 20:13:38 by arnduran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_error(int color)
{
	if (color == 1)
		ft_putstr("\033[22;31mErreur !");
	if (color == 2)
		ft_putstr("\033[22;32mErreur !");
	if (color == 3)
		ft_putstr("\033[22;33mErreur !");
	if (color == 4)
		ft_putstr("\033[22;34mErreur !");
	if (color == 5)
		ft_putstr("\033[22;35mErreur !");
	if (color == 6)
		ft_putstr("\033[22;36mErreur !");
	if (color == 7)
		ft_putstr("\033[22;37mErreur !");
	if (color == 8)
		ft_putstr("\033[01;30mErreur !");
	if (color == 9)
		ft_putstr("\033[01;31mErreur !");
	if (color == 10)
		ft_putstr("\033[01;32mErreur !");
	if (color == 11)
		ft_putstr("\033[01;33mErreur !");
	if (color == 12)
		ft_putstr("\033[01;34mErreur !");
}
