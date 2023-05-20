/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 03:11:19 by omahdiou          #+#    #+#             */
/*   Updated: 2023/05/19 13:06:40 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	separator(char c, char sep)
{
	if (c == sep)
		return (1);
	if (c == '\0')
		return (1);
	return (0);
}

int	countword(char *str, char c)
{
	int	i;
	int	w;

	i = 0;
	w = 0;
	while (str[i])
	{
		if (separator(str[i], c) == 0 && separator(str[i + 1], c) == 1)
			w++;
		i++;
	}
	return (w);
}

void	cpy(char *s1, char *s2, char c)
{
	int		i;

	i = 0;
	while (separator(s2[i], c) == 0)
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
}

int	ft_split1(char **split, char *str, char c, int k)
{
	int		i;
	int		j;

	i = 0;
	while (str[i] != '\0')
	{
		if (separator(str[i], c) == 1)
			i++;
		else
		{
			j = 0;
			while (separator(str[i + j], c) == 0)
				j++;
			split[k] = (char *)malloc(sizeof(char) * (j + 1));
			if (!(split + k))
				return (0);
			cpy(split[k], str + i, c);
			i += j;
			k++;
		}
	}
	return (1);
}

char	**ft_split(char *s, char c)
{
	char	**tmp;
	int		w;

	if (!s)
		return (NULL);
	tmp = malloc(sizeof(char *) * (countword(s, c) + 1));
	if (!tmp)
		return (NULL);
	w = 0;
	if (!ft_split1(tmp, s, c, 0))
	{
		while (tmp + w)
		{
			free(tmp + w);
			w++;
		}
		free(tmp);
	}
	tmp[countword(s, c)] = 0;
	return (tmp);
}
