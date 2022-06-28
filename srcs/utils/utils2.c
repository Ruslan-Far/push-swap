/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljaehaer <ljaehaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 14:01:22 by ljaehaer          #+#    #+#             */
/*   Updated: 2022/01/16 15:52:31 by ljaehaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/push_swap.h"
#include "../../libft/libft.h"

void	pre_a_to_pb(t_list **a, int i)
{
	int	len;

	len = ft_lstsize(*a);
	if (i <= len / 2)
		cra(a, i);
	else
		crra(a, len - i);
}

void	pre_b_to_pb(t_list **b, int i)
{
	int	len;

	len = ft_lstsize(*b);
	if (i <= len / 2)
		crb(b, i);
	else
		crrb(b, len - i);
}

void	pre_b_to_pa(t_list **b)
{
	int	i;

	i = search_max(*b);
	pre_b_to_pb(b, i);
}

void	init_groups(int **groups, int rows, int *arr, int len_arr)
{
	int	i;
	int	j;
	int	count;

	count = 0;
	i = 0;
	while (i < rows)
	{
		j = 0;
		while (count < len_arr && j < 20)
			groups[i][j++] = arr[count++];
		i++;
	}
	i--;
	while (j < 20)
		groups[i][j++] = 0;
}

void	init_groups_many(int **groups, int rows, int *arr, int len_arr)
{
	int	i;
	int	j;
	int	count;

	count = 0;
	i = 0;
	while (i < rows)
	{
		j = 0;
		while (count < len_arr && j < 45)
			groups[i][j++] = arr[count++];
		i++;
	}
	i--;
	while (j < 45)
		groups[i][j++] = 0;
}
