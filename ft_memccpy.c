/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarchba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 16:10:28 by cmarchba          #+#    #+#             */
/*   Updated: 2020/11/13 17:04:21 by cmarchba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*pc_dst;
	unsigned char	*pc_src;

	pc_dst = (unsigned char*)dst;
	pc_src = (unsigned char*)src;
	while (n--)
	{
		*pc_dst = *pc_src;
		if (*pc_dst == (unsigned char)c)
			return (pc_dst + 1);
		pc_dst++;
		pc_src++;
	}
	return (NULL);
}
