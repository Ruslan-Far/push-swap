/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljaehaer <ljaehaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 16:58:38 by ljaehaer          #+#    #+#             */
/*   Updated: 2022/01/16 15:52:54 by ljaehaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/push_swap.h"
#include "../../libft/libft.h"

void	pre_a_b_to_pb(t_list **a, t_list **b, int i)
{
	int	len;

	pre_a_to_pb(a, i);
	len = ft_lstsize(*b);
	if (len == 0)
		pb(b, a);
	else if (is_max(*b, *(int *)(*a)->content)
		|| is_min(*b, *(int *)(*a)->content))
	{
		pre_b_to_pb(b, search_min(*b));
		pb(b, a);
	}
	else
	{
		i = search_place(b, *(int *)(*a)->content);
		pre_b_to_pb(b, i);
		pb(b, a);
	}
}

int	in_group(int *group, int n)
{
	int	i;

	i = 0;
	while (i < 20)
	{
		if (group[i++] == n)
			return (1);
	}
	return (0);
}

int	in_group_many(int *group, int n)
{
	int	i;

	i = 0;
	while (i < 45)
	{
		if (group[i++] == n)
			return (1);
	}
	return (0);
}

void	run_in_groups(int **groups, int rows, t_list **a, t_list **b)
{
	int		i;
	int		j;
	t_list	*a_head;

	i = 0;
	a_head = *a;
	while (i < rows)
	{
		*a = a_head;
		j = -1;
		while (*a)
		{
			if (in_group(groups[i], *(int *)((*a)->content)))
			{
				pre_a_b_to_pb(&a_head, b, j + 1);
				*a = a_head;
				j = -2;
			}
			else
				(*a) = (*a)->next;
			j++;
		}
		i++;
	}
}

void	run_in_groups_many(int **groups, int rows, t_list **a, t_list **b)
{
	int		i;
	int		j;
	t_list	*a_head;

	i = 0;
	a_head = *a;
	while (i < rows)
	{
		*a = a_head;
		j = -1;
		while (*a)
		{
			if (in_group_many(groups[i], *(int *)((*a)->content)))
			{
				pre_a_b_to_pb(&a_head, b, j + 1);
				*a = a_head;
				j = -2;
			}
			else
				(*a) = (*a)->next;
			j++;
		}
		i++;
	}
}
