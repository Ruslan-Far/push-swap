/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cycle_reverse_rotate.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljaehaer <ljaehaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 00:46:05 by ljaehaer          #+#    #+#             */
/*   Updated: 2022/01/16 15:49:31 by ljaehaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/push_swap.h"
#include "../../libft/libft.h"

void	crra(t_list **a, int n)
{
	int	i;

	i = 0;
	while (i++ < n)
		rra(a);
}

void	crrb(t_list **b, int n)
{
	int	i;

	i = 0;
	while (i++ < n)
		rrb(b);
}

void	crrr(t_list **a, t_list **b, int n)
{
	int	i;

	i = 0;
	while (i++ < n)
		rrr(a, b);
}
