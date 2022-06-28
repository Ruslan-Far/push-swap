/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljaehaer <ljaehaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 00:22:04 by ljaehaer          #+#    #+#             */
/*   Updated: 2022/01/17 14:48:39 by ljaehaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

void	sa(t_list **a);
void	sb(t_list **b);
void	ss(t_list **a, t_list **b);

void	pa(t_list **a, t_list **b);
void	pb(t_list **b, t_list **a);

void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);

void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);

void	cra(t_list **a, int n);
void	crb(t_list **b, int n);
void	crr(t_list **a, t_list **b, int n);

void	crra(t_list **a, int n);
void	crrb(t_list **b, int n);
void	crrr(t_list **a, t_list **b, int n);

void	sort_3_nums(t_list **a);
void	sort_4_nums(t_list **a, t_list **b);
void	sort_5_nums(t_list **a, t_list **b);
void	sort_many_nums(t_list **a, t_list **b, int rows, int cols);
void	sort_many_many_nums(t_list **a, t_list **b, int rows, int cols);

int		a_is_sorted(t_list *a);
int		b_is_sorted(t_list *b);
void	sort(t_list **a, t_list **b);

int		is_max(t_list *any, int n);
int		is_min(t_list *any, int n);
int		search_max(t_list *any);
int		search_min(t_list *any);
int		search_place(t_list **b, int n);

void	pre_a_to_pb(t_list **a, int i);
void	pre_b_to_pb(t_list **b, int i);
void	pre_b_to_pa(t_list **b);
void	init_groups(int **groups, int rows, int *arr, int len_arr);
void	init_groups_many(int **groups, int rows, int *arr, int len_arr);
int		in_group(int *group, int n);
int		in_group_many(int *group, int n);
void	run_in_groups(int **groups, int rows, t_list **a, t_list **b);
void	run_in_groups_many(int **groups, int rows, t_list **a, t_list **b);

int		**gen_groups(int rows, int cols);
void	clean_groups(int **groups, int rows);

int		*conv_to_arr(t_list *x, int len);
void	arr_sort(int *arr, int len);

t_list	*check_for_error_argv(int argc, char **argv);
void	put_error(t_list *a);
void	del(void *content);

#endif