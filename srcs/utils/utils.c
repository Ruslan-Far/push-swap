/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljaehaer <ljaehaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 13:56:00 by ljaehaer          #+#    #+#             */
/*   Updated: 2022/01/07 14:48:38 by ljaehaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/push_swap.h"
#include "../../libft/libft.h"

int	is_max(t_list *any, int n)
{
	while (any)
	{
		if (*(int *)any->content > n)
			return (0);
		any = any->next;
	}
	return (1);
}

int	is_min(t_list *any, int n)
{
	while (any)
	{
		if (*(int *)any->content < n)
			return (0);
		any = any->next;
	}
	return (1);
}

int	search_max(t_list *any)
{
	int	i;
	int	count;
	int	max;

	count = 0;
	max = (-__INT32_MAX__) - 1;
	while (any)
	{
		if (*(int *)(any->content) > max)
		{
			max = *(int *)(any->content);
			i = count;
		}
		count++;
		any = any->next;
	}
	return (i);
}

int	search_min(t_list *any)
{
	int	i;
	int	count;
	int	min;

	count = 0;
	min = __INT32_MAX__;
	while (any)
	{
		if (*(int *)(any->content) < min)
		{
			min = *(int *)(any->content);
			i = count;
		}
		count++;
		any = any->next;
	}
	return (i);
}

int	search_place(t_list **b, int n)
{
	int		i;
	t_list	*t;

	t = *b;
	i = 0;
	while (t->next)
	{
		if (*(int *)t->content < n && *(int *)t->next->content > n)
			return (i + 1);
		i++;
		t = t->next;
	}
	return (0);
}
