/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instraction1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 03:41:14 by omahdiou          #+#    #+#             */
/*   Updated: 2023/05/18 23:57:53 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_data *data)
{
	int	tmp;
	int	i;

	i = -1;
	tmp = data->stack_a[0];
	while (++i < data->size_a - 1)
		data->stack_a[i] = data->stack_a[i + 1];
	i = data->size_b;
	while (i)
	{
		data->stack_b[i] = data->stack_b[i - 1];
		i--;
	}
	data->stack_b[0] = tmp;
	data->size_b++;
	data->size_a--;
	write(1, "pb\n", 3);
}

void	pa(t_data *data)
{
	int	tmp;
	int	i;

	i = -1;
	tmp = data->stack_b[0];
	while (++i < data->size_b - 1)
		data->stack_b[i] = data->stack_b[i + 1];
	i = data->size_a;
	while (i)
	{
		data->stack_a[i] = data->stack_a[i - 1];
		i--;
	}
	data->stack_a[0] = tmp;
	data->size_a++;
	data->size_b--;
	write(1, "pa\n", 3);
}
