/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljaehaer <ljaehaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 00:09:46 by ljaehaer          #+#    #+#             */
/*   Updated: 2021/12/31 17:47:32 by ljaehaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/push_swap.h"
#include "../../libft/libft.h"

static void	p_any(t_list **any, t_list **any2)
{
	t_list	*t;

	t = (*any2)->next;
	(*any2)->next = *any;
	*any = *any2;
	*any2 = t;
}

void	pa(t_list **a, t_list **b)
{
	p_any(a, b);
	write(1, "pa\n", 3);
}

void	pb(t_list **b, t_list **a)
{
	p_any(b, a);
	write(1, "pb\n", 3);
}
