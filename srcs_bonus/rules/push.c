/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljaehaer <ljaehaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 00:50:47 by ljaehaer          #+#    #+#             */
/*   Updated: 2022/01/17 14:20:47 by ljaehaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/push_swap.h"
#include "../../libft/libft.h"
#include "../../incs/push_swap_bonus.h"

static void	p_any(t_list **any, t_list **any2)
{
	t_list	*t;

	t = (*any2)->next;
	(*any2)->next = *any;
	*any = *any2;
	*any2 = t;
}

void	p_a(t_list **a, t_list **b)
{
	if (*b)
		p_any(a, b);
}

void	p_b(t_list **b, t_list **a)
{
	if (*a)
		p_any(b, a);
}
