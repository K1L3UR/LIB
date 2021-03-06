/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnduran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 19:23:03 by arnduran          #+#    #+#             */
/*   Updated: 2019/01/28 19:23:04 by arnduran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;
	void	*content_cpy;

	content_cpy = NULL;
	if (!content)
		content_size = 0;
	else
	{
		content_cpy = ft_memalloc(content_size);
		if (content_cpy == NULL)
			return (NULL);
		content_cpy = ft_memcpy(content_cpy, content, content_size);
	}
	if (!(list = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	{
		list->content = content_cpy;
		list->content_size = content_size;
		list->next = NULL;
		return (list);
	}
	return (NULL);
}
