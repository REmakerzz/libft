/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarchba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 16:10:08 by cmarchba          #+#    #+#             */
/*   Updated: 2020/11/13 16:33:47 by cmarchba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*pc_b;

	pc_b = (unsigned char*)b;
	while (len--)
	{
		*pc_b = (unsigned char)c;
		pc_b++;
	}
	return (b);
}
