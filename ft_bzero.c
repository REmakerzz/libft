/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarchba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 16:09:54 by cmarchba          #+#    #+#             */
/*   Updated: 2020/11/13 20:43:17 by cmarchba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*pc_s;

	pc_s = (unsigned char*)s;
	while (n--)
	{
		*pc_s = '\0';
		pc_s++;
	}
}
