/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylyk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 11:43:06 by dylyk             #+#    #+#             */
/*   Updated: 2020/11/13 20:51:21 by cmarchba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*sum_str;
	int		i;
	int		j;

	if (s1 && s2)
	{
		i = ft_strlen(s1) + ft_strlen(s2);
		sum_str = (char *)malloc(sizeof(char) * i + 1);
		if (NULL == sum_str)
			return (NULL);
		i = 0;
		j = 0;
		while (s1[i])
			sum_str[i++] = s1[j++];
		j = 0;
		while (s2[j])
			sum_str[i++] = s2[j++];
		sum_str[i] = '\0';
		return (sum_str);
	}
	return (NULL);
}
