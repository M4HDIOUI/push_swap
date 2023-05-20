/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instraction2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 03:42:18 by omahdiou          #+#    #+#             */
/*   Updated: 2023/05/17 03:44:41 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_data *ptr, int i)
{
	int		j;
	int		tmp;

	j = 0;
	tmp = ptr->stack_a[0];
	while (j < ptr->size_a - 1)
	{
		ptr->stack_a[j] = ptr->stack_a[j + 1];
		j++;
	}
	ptr->stack_a[j] = tmp;
	i = 1;
	if (i == 1)
		write(1, "ra\n", 3);
}

void	rb(t_data *ptr, int i)
{
	int		j;
	int		tmp;

	j = 0;
	tmp = ptr->stack_b[0];
	while (j < ptr->size_b)
	{
		ptr->stack_b[j] = ptr->stack_b[j + 1];
		j++;
	}
	ptr->stack_b[j - 1] = tmp;
	i = 1;
	if (i == 1)
		write(1, "rb\n", 3);
}

void	rr(t_data *ptr)
{
	ra(ptr, 0);
	rb(ptr, 0);
	write(1, "rr\n", 3);
}
