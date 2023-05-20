/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 23:53:56 by omahdiou          #+#    #+#             */
/*   Updated: 2023/05/19 13:01:26 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bubblesort(int *arr, int n)
{
	int		i;
	int		x;

	i = 0;
	while (i < n - 1)
	{
		x = 0;
		while (x < n - i - 1)
		{
			if (arr[x] > arr[x + 1])
				swap(&arr[x], &arr[x + 1]);
			x++;
		}
		i++;
	}
}

void	push_to_b(t_data *stack, int n)
{
	int		p1;
	int		p2;
	int		counter;
	int		i;

	i = 0;
	p1 = ((stack->size_a + 1) / n) + ((stack->size_a + 1) % n);
	p2 = p1 / 2;
	counter = 0;
	while (stack->size_a)
	{
		counter = where_to_push(stack, p1, p2, counter);
		if (counter >= p1)
		{
			ft_copy(stack);
			bubblesort(stack->fake, stack->size_a);
			p1 = stack->size_a / n;
			p2 = p1 / 2;
			counter = 0;
		}
	}
}

void	back_to_a(t_data *stack)
{
	int		max;
	int		index;

	while (stack->size_b)
	{
		max = check_max(stack);
		index = get_max_index(stack, max);
		if (index > stack->size_b / 2)
		{
			while (max != stack->stack_b[0])
			{
				rrb(stack, 1);
			}
		}
		else
		{
			while (max != stack->stack_b[0])
				rb(stack, 1);
		}
		pa(stack);
	}
}

void	sort(t_data *stack, int n)
{
	bubblesort(stack->fake, stack->size_a);
	push_to_b(stack, n);
	back_to_a(stack);
}
