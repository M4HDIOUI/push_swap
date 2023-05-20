/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 12:53:02 by omahdiou          #+#    #+#             */
/*   Updated: 2023/05/19 13:27:46 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	duplicate(t_data *stack)
{
	if (check_duplicate(stack->stack_a, stack->size_a))
	{
		write (2, "Error!\n", 6);
		exit (1);
	}
}

int	check_empty(char **arg, int count)
{
	count = 0;
	while (arg[count])
		count++;
	if (count == 0)
	{
		write(2, "Error!\n", 6);
		exit(1);
	}
	return (count);
}

void	check_empty2(char *arg)
{
	int	count;
	int	i;

	count = 0;
	i = -1;
	while (arg[++i] == ' ' || arg[++i] == '\t')
		count++;
	if (count == ft_strlen(arg))
	{
		write(2, "Error!\n", 6);
		exit(1);
	}
}

void	after_split(t_data *stack, char **arg)
{
	int	i;

	i = -1;
	while (arg[++i])
	{
		check(arg[i]);
		stack->stack_a[i] = push_atoi(arg[i]);
	}
}
