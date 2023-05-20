/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 21:04:37 by omahdiou          #+#    #+#             */
/*   Updated: 2023/05/19 13:27:53 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	initstack(t_data *stack, int count)
{
	stack->stack_a = malloc(sizeof(int) * count);
	stack->stack_b = malloc(sizeof(int) * count);
	stack->size_a = count;
	stack->size_b = 0;
}

void	argfree(char **arg, int i)
{
	i = 0;
	while (arg[i])
	{
		free(arg[i]);
		i++;
	}
	free(arg);
}

void	parsing(int ac, char **av, t_data *stack)
{
	int		i;
	int		count;
	char	*tmp;
	char	**arg;

	count = 0;
	i = 0;
	tmp = ft_strdup("");
	while (++i < ac)
	{
		check(av[i]);
		check_empty2(av[i]);
		tmp = ft_join(tmp, av[i]);
		tmp = ft_join(tmp, " ");
	}
	arg = ft_split(tmp, ' ');
	free(tmp);
	count = check_empty(arg, count);
	initstack(stack, count);
	after_split(stack, arg);
	argfree(arg, i);
	stack->fake = copyarray(stack->stack_a, stack->size_a);
	sorted(stack);
	duplicate(stack);
}
