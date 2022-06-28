/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_nums.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljaehaer <ljaehaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 15:38:43 by ljaehaer          #+#    #+#             */
/*   Updated: 2022/01/16 20:13:24 by ljaehaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"
#include "../libft/libft.h"

void	sort_3_nums(t_list **a)
{
	int	n;
	int	n2;
	int	n3;

	n = (*(int *)((*a)->content));
	n2 = (*(int *)((*a)->next->content));
	n3 = (*(int *)((*a)->next->next->content));
	if (n > n2 && n2 < n3 && n < n3)
		sa(a);
	else if (n > n2 && n2 > n3 && n > n3)
	{
		sa(a);
		rra(a);
	}
	else if (n > n2 && n2 < n3 && n > n3)
		ra(a);
	else if (n < n2 && n2 > n3 && n < n3)
	{
		sa(a);
		ra(a);
	}
	else if (n < n2 && n2 > n3 && n > n3)
		rra(a);
}
