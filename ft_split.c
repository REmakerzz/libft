/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylyk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 11:45:48 by dylyk             #+#    #+#             */
/*   Updated: 2020/11/13 20:21:45 by cmarchba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		kol_words(const char *s, char c)
{
	int		words;

	words = 0;
	while (*s)
	{
		if (*s != c)
			words++;
		while (*s != c && *(s + 1))
			s++;
		s++;
	}
	return (words);
}

static	void	*free_this(char **total, int i)
{
	while (i)
	{
		free(total[i]);
		total[i] = NULL;
		i--;
	}
	free(total);
	total = NULL;
	return (total);
}

static	int		l_word(const char *s, char c)
{
	int		i;

	i = 0;
	while (*s != c && *s++)
		i++;
	return (i);
}

char			**ft_split(char const *s, char c)
{
	char	**rez;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	if (!(rez = (char **)malloc((kol_words(s, c) + 1) * (sizeof(char *)))))
		return (NULL);
	while (i < kol_words(s, c))
	{
		while (s[j] == c)
			j++;
		if (!(rez[i] = (char *)malloc((l_word(&s[j], c) + 1) * (sizeof(char)))))
			return (free_this(rez, i));
		ft_strlcpy(rez[i], &s[j], l_word(&s[j], c) + 1);
		while (s[j] != c && s[j])
			j++;
		i++;
	}
	rez[i] = NULL;
	return (rez);
}
