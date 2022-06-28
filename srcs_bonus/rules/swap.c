/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljaehaer <ljaehaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 23:44:18 by ljaehaer          #+#    #+#             */
/*   Updated: 2022/01/17 14:21:10 by ljaehaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/push_swap.h"
#include "../../libft/libft.h"
#include "../../incs/push_swap_bonus.h"

static void	s_any(t_list **any)
{
	t_list	*t;

	t = (*any)->next;
	(*any)->next = t->next;
	t->next = *any;
	*any = t;
}

void	s_a(t_list **a)
{
	if (ft_lstsize(*a) > 1)
		s_any(a);
}

void	s_b(t_list **b)
{
	if (ft_lstsize(*b) > 1)
		s_any(b);
}

void	s_s(t_list **a, t_list **b)
{
	s_a(a);
	s_b(b);
}
