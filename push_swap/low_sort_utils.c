/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   low_sort_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 04:22:25 by omahdiou          #+#    #+#             */
/*   Updated: 2023/05/19 14:30:21 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_min(t_data *stack)
{
	int		i;
	int		min;

	min = stack->stack_a[0];
	i = 1;
	while (i < stack->size_a)
	{
		if (min > stack->stack_a[i])
			min = stack->stack_a[i];
		i++;
	}
	return (min);
}

int	min_index(t_data *stack)
{
	int		i;
	int		min;

	min = stack->stack_a[0];
	i = 1;
	while (i < stack->size_a)
	{
		if (min > stack->stack_a[i])
			min = stack->stack_a[i];
		i++;
	}
	return (i);
}
