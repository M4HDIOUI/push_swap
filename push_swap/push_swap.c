/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 18:52:06 by omahdiou          #+#    #+#             */
/*   Updated: 2023/05/19 14:28:45 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(void *s)
{
	if (s)
		free(s);
	s = NULL;
}

void	struct_free(t_data *array)
{
	free(array->stack_a);
	free(array->stack_b);
	free(array->fake);
	free(array);
}

int	main(int ac, char **av)
{
	t_data	*ptr;

	ptr = NULL;
	if (ac == 1)
		exit(0);
	ptr = malloc (sizeof(t_data));
	if (!ptr)
		return (free(ptr), 1);
	parsing(ac, av, ptr);
	if (ptr->size_a == 2)
		sort_2(ptr);
	else if (ptr->size_a == 3)
		sort_3(ptr);
	else if (ptr->size_a == 4)
		sort_4(ptr);
	else if (ptr->size_a <= 5)
		sort_5(ptr);
	else if (ptr->size_a <= 100)
		sort(ptr, 4);
	else if (ptr->size_a > 100)
		sort(ptr, 5);
	struct_free(ptr);
	return (0);
}
