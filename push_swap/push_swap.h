/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 20:29:57 by omahdiou          #+#    #+#             */
/*   Updated: 2023/05/19 13:26:23 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     PUSH_SWAP_H
# define    PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_data{
	int		size_a;
	int		size_b;
	int		*stack_a;
	int		*stack_b;
	int		*fake;
}	t_data;

int		separator(char c, char sep);
int		countword(char *str, char c);
void	cpy(char *s1, char *s2, char c);
int		ft_split1(char **split, char *str, char c, int k);
char	**ft_split(char *s, char c);
void	sa(t_data *ptr, int i);
void	sb(t_data *ptr, int i);
void	ss(t_data *ptr);
void	pb(t_data *data);
void	pa(t_data *stack);
void	ra(t_data *ptr, int i);
void	rb(t_data *ptr, int i);
void	rr(t_data *ptr);
void	rra(t_data *ptr, int i);
void	rrb(t_data *ptr, int i);
void	rrr(t_data *ptr);
void	parsing(int ac, char **av, t_data *stack);
void	struct_free(t_data *array);
int		get_max_index(t_data *stack, int max);
void	back_to_a(t_data *stack);
int		check_max(t_data *str);
void	ft_copy(t_data *stack);
int		where_to_push(t_data *stack, int p1, int p2, int counter);
void	push_to_b(t_data *stack, int n);
void	sort(t_data *stack, int n);
int		*swap(int *a, int *b);
void	bubblesort(int *arr, int n);
int		check_min(t_data *stack);
void	sort_2(t_data *stack);
void	sort_3(t_data *stack);
void	sort_4(t_data *stack);
void	sort_5(t_data *stack);
int		push_atoi(char *s);
int		ft_strlen(char *s);
char	*ft_join(char *s1, char *s2);
int		is_digit(char c);
void	check(char *str);
int		check_duplicate(int *tab, int len);
int		sorted(t_data *ptr);
int		*copyarray(int *src, int size);
char	*ft_strdup(char *s);
int		min_index(t_data *stack);
void	after_split(t_data *stack, char **arg);
void	initstack(t_data *stack, int count);
void	argfree(char **arg, int i);
void	duplicate(t_data *stack);
int		check_empty(char **arg, int count);
void	after_split(t_data *stack, char **arg);
void	check_empty2(char *arg);

#endif
