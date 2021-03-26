/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylyk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 11:41:14 by dylyk             #+#    #+#             */
/*   Updated: 2020/11/13 20:49:50 by cmarchba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char		*ptr;
	size_t		i;
	size_t		rez;

	rez = count * size;
	ptr = malloc(rez);
	if (!ptr)
		return (NULL);
	i = 0;
	while (rez--)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void*)ptr);
}
