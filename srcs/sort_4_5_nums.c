/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4_5_nums.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljaehaer <ljaehaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 15:17:53 by ljaehaer          #+#    #+#             */
/*   Updated: 2022/01/16 15:48:05 by ljaehaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"
#include "../libft/libft.h"

static void	pre_pb_min_4_nums(t_list **a)
{
	int	i;

	i = search_min(*a);
	if (i == 0)
		return ;
	if (i == 1)
		ra(a);
	else if (i == 2)
	{
		ra(a);
		ra(a);
	}
	else
		rra(a);
}

static void	pre_pb_min_5_nums(t_list **a)
{
	int	i;

	i = search_min(*a);
	if (i == 0)
		return ;
	if (i == 1)
		ra(a);
	else if (i == 2)
	{
		ra(a);
		ra(a);
	}
	else if (i == 3)
	{
		rra(a);
		rra(a);
	}
	else
		rra(a);
}

void	sort_4_nums(t_list **a, t_list **b)
{
	pre_pb_min_4_nums(a);
	pb(b, a);
	sort_3_nums(a);
	pa(a, b);
}

void	sort_5_nums(t_list **a, t_list **b)
{
	pre_pb_min_5_nums(a);
	pb(b, a);
	sort_4_nums(a, b);
	pa(a, b);
}
