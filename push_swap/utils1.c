/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 04:37:00 by omahdiou          #+#    #+#             */
/*   Updated: 2023/05/19 12:54:42 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check(char *str)
{
	int		i;

	i = 0;
	if ((str[0] == '-' || str[0] == '+'))
	{
		if (str[i + 1] == '\0')
		{
			write (2, "Error!", 6);
			exit(0);
		}
	}
}

int	check_duplicate(int *tab, int len)
{
	int		i;
	int		j;

	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < len)
		{
			if (tab[j] == tab[i] && j != i)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	sorted(t_data *ptr)
{
	int		i;

	i = 0;
	while (ptr->size_a - 1 > i)
	{
		if (ptr->stack_a[i] < ptr->stack_a[i + 1])
			i++;
		else
			return (0);
	}
	exit (0);
}

int	*copyarray(int *src, int size)
{
	int		i;
	int		*dest;

	i = 0;
	dest = (int *)malloc(size * sizeof(int));
	if (dest == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

char	*ft_strdup(char *s)
{
	int		i;
	char	*temp;

	i = 0;
	temp = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	while (s[i])
	{
		temp[i] = s[i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
