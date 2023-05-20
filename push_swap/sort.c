/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 12:11:53 by omahdiou          #+#    #+#             */
/*   Updated: 2023/05/19 12:54:21 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2(t_data *stack)
{
	if (stack->stack_a[1] < stack->stack_a[0])
		sa(stack, 1);
}

void	sort_3(t_data *p)
{
	if (p->stack_a[2] > p->stack_a[1] && p->stack_a[2] > p->stack_a[0]
		&& p->stack_a[0] > p->stack_a[1])
		sa(p, 1);
	else if (p->stack_a[0] > p->stack_a[1]
		&& p->stack_a[0] > p->stack_a[2]
		&& p->stack_a[1] > p->stack_a[2])
	{
		sa(p, 1);
		rra(p, 1);
	}
	else if (p->stack_a[0] > p->stack_a[1]
		&& p->stack_a[0] > p->stack_a[2]
		&& p->stack_a[1] < p->stack_a[2])
		ra(p, 1);
	else if (p->stack_a[0] < p->stack_a[1]
		&& p->stack_a[0] < p->stack_a[2]
		&& p->stack_a[1] > p->stack_a[2])
	{
		sa(p, 1);
		ra(p, 1);
	}
	else if (p->stack_a[1] > p->stack_a[0]
		&& p->stack_a[1] > p->stack_a[2]
		&& p->stack_a[0] > p->stack_a[2])
		rra(p, 1);
}

void	sort_4(t_data *stack)
{
	int		min;
	int		i;

	min = check_min(stack);
	i = 0;
	while (i <= stack->size_a)
	{
		if (stack->stack_a[0] == min)
		{
			pb(stack);
			break ;
		}
		else
			ra(stack, 1);
		i++;
	}
	sort_3(stack);
	pa(stack);
}

void	sort_5(t_data *stack)
{
	int		min;
	int		i;
	int		index;

	min = check_min(stack);
	index = min_index(stack);
	i = 0;
	while (i <= stack->size_a)
	{
		if (stack->stack_a[0] == min)
		{
			pb(stack);
			break ;
		}
		else if (index < stack->size_a / 2)
			ra(stack, 1);
		else
			rra(stack, 1);
		i++;
	}
	sort_4(stack);
	pa(stack);
}
