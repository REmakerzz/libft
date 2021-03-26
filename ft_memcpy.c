/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarchba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 16:10:18 by cmarchba          #+#    #+#             */
/*   Updated: 2020/11/13 16:39:06 by cmarchba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *pc_dst;
	unsigned char *pc_src;

	if (!n || dst == src)
		return (dst);
	pc_dst = (unsigned char*)dst;
	pc_src = (unsigned char*)src;
	while (n--)
		*pc_dst++ = *pc_src++;
	return (dst);
}
