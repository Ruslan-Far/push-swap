/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljaehaer <ljaehaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 23:44:18 by ljaehaer          #+#    #+#             */
/*   Updated: 2021/12/31 17:47:22 by ljaehaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/push_swap.h"
#include "../../libft/libft.h"

static void	s_any(t_list **any)
{
	t_list	*t;

	t = (*any)->next;
	(*any)->next = t->next;
	t->next = *any;
	*any = t;
}

void	sa(t_list **a)
{
	s_any(a);
	write(1, "sa\n", 3);
}

void	sb(t_list **b)
{
	s_any(b);
	write(1, "sb\n", 3);
}

void	ss(t_list **a, t_list **b)
{
	s_any(a);
	s_any(b);
	write(1, "ss\n", 3);
}
