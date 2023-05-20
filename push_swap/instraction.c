/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instraction.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 20:27:22 by omahdiou          #+#    #+#             */
/*   Updated: 2023/05/17 03:43:31 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_data *ptr, int i)
{
	int		tmp;

	tmp = ptr->stack_a[0];
	ptr->stack_a[0] = ptr->stack_a[1];
	ptr->stack_a[1] = tmp;
	if (i == 1)
		write(1, "sa\n", 3);
}

void	sb(t_data *ptr, int i)
{
	int		tmp;

	if (ptr->size_b != 0)
	{
		tmp = ptr->stack_b[0];
		ptr->stack_b[0] = ptr->stack_b[1];
		ptr->stack_b[1] = tmp;
	}
	if (i == 1)
		write(1, "sb\n", 3);
}

void	ss(t_data *ptr)
{
	sa(ptr, 0);
	sb(ptr, 0);
	write (1, "ss\n", 3);
}
