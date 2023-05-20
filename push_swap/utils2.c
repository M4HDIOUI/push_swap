/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:07:59 by omahdiou          #+#    #+#             */
/*   Updated: 2023/05/19 12:05:54 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	checkk(char *s)
{
	if (ft_strlen(s) > 11)
	{
		write(2, "Error!\n", 6);
		exit(1);
	}
}

void	check_max_int(long numb, char *s, int i)
{
	if (numb > INT_MAX || numb < INT_MIN || s[i] != '\0')
	{
		write(2, "Error!\n", 6);
		exit(1);
	}
}

int	push_atoi(char *s)
{
	int		i;
	long	numb;
	int		sign;

	numb = 0;
	i = 0;
	sign = 1;
	checkk(s);
	if (s[i] && (s[i] == '+' || s[i] == '-'))
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while (s[i] && s[i] >= '0' && s[i] <= '9')
	{
		numb = (numb * 10) + (s[i] - 48);
		i++;
	}
	numb = numb * sign;
	check_max_int(numb, s, i);
	return ((int)numb);
}
