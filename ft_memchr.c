/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarchba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 17:05:48 by cmarchba          #+#    #+#             */
/*   Updated: 2020/11/13 17:06:40 by cmarchba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptrs;
	unsigned char	ch;
	unsigned int	i;

	i = 0;
	ptrs = (unsigned char*)s;
	ch = (unsigned char)c;
	while (i < n && ptrs[i] != ch)
		i++;
	if (i == n)
		return (NULL);
	return (&ptrs[i]);
}
