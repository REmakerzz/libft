/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylyk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 22:42:34 by dylyk             #+#    #+#             */
/*   Updated: 2020/11/10 12:50:01 by dylyk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list		*i;

	if (!(i = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	i->content = content;
	i->next = NULL;
	return (i);
}
