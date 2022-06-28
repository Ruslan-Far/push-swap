/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljaehaer <ljaehaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 01:26:15 by ljaehaer          #+#    #+#             */
/*   Updated: 2022/01/17 14:20:54 by ljaehaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/push_swap.h"
#include "../../libft/libft.h"
#include "../../incs/push_swap_bonus.h"

static void	rr_any(t_list **any)
{
	t_list	*head;
	t_list	*last;

	head = *any;
	last = ft_lstlast(*any);
	while ((*any)->next->next)
		(*any) = (*any)->next;
	(*any)->next = NULL;
	last->next = head;
	*any = last;
}

void	r_r_a(t_list **a)
{
	if (ft_lstsize(*a) > 1)
		rr_any(a);
}

void	r_r_b(t_list **b)
{
	if (ft_lstsize(*b) > 1)
		rr_any(b);
}

void	r_r_r(t_list **a, t_list **b)
{
	r_r_a(a);
	r_r_b(b);
}
