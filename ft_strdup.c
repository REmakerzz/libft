/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylyk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 11:42:59 by dylyk             #+#    #+#             */
/*   Updated: 2020/11/13 20:50:01 by cmarchba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char	*pc_s1;
	int		i;

	i = 0;
	while (s1[i])
		i++;
	pc_s1 = (char*)malloc(sizeof(*s1) * (i + 1));
	if (!pc_s1)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		pc_s1[i] = s1[i];
		i++;
	}
	pc_s1[i] = '\0';
	return (pc_s1);
}
