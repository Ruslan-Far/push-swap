/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljaehaer <ljaehaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 00:42:48 by ljaehaer          #+#    #+#             */
/*   Updated: 2022/01/17 14:21:02 by ljaehaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/push_swap.h"
#include "../../libft/libft.h"
#include "../../incs/push_swap_bonus.h"

static void	r_any(t_list **any)
{
	t_list	*head;

	head = (*any)->next;
	ft_lstlast(*any)->next = *any;
	(*any)->next = NULL;
	*any = head;
}

void	r_a(t_list **a)
{
	if (ft_lstsize(*a) > 1)
		r_any(a);
}

void	r_b(t_list **b)
{
	if (ft_lstsize(*b) > 1)
		r_any(b);
}

void	r_r(t_list **a, t_list **b)
{
	r_a(a);
	r_b(b);
}
