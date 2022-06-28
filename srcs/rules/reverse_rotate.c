/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljaehaer <ljaehaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 01:26:15 by ljaehaer          #+#    #+#             */
/*   Updated: 2022/01/16 15:51:58 by ljaehaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/push_swap.h"
#include "../../libft/libft.h"

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

void	rra(t_list **a)
{
	rr_any(a);
	write(1, "rra\n", 4);
}

void	rrb(t_list **b)
{
	rr_any(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_list **a, t_list **b)
{
	rr_any(a);
	rr_any(b);
	write(1, "rrr\n", 4);
}
