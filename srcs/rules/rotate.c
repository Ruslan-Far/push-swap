/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljaehaer <ljaehaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 00:42:48 by ljaehaer          #+#    #+#             */
/*   Updated: 2022/01/16 15:52:10 by ljaehaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/push_swap.h"
#include "../../libft/libft.h"

static void	r_any(t_list **any)
{
	t_list	*head;

	head = (*any)->next;
	ft_lstlast(*any)->next = *any;
	(*any)->next = NULL;
	*any = head;
}

void	ra(t_list **a)
{
	r_any(a);
	write(1, "ra\n", 3);
}

void	rb(t_list **b)
{
	r_any(b);
	write(1, "rb\n", 3);
}

void	rr(t_list **a, t_list **b)
{
	r_any(a);
	r_any(b);
	write(1, "rr\n", 3);
}
