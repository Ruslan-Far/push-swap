/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljaehaer <ljaehaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 22:06:24 by ljaehaer          #+#    #+#             */
/*   Updated: 2022/01/17 14:46:30 by ljaehaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"
#include "../libft/libft.h"

void	sort(t_list **a, t_list **b)
{
	int	len;

	if (a_is_sorted(*a))
		return ;
	len = ft_lstsize(*a);
	if (len == 2)
		sa(a);
	else if (len == 3)
		sort_3_nums(a);
	else if (len == 4)
		sort_4_nums(a, b);
	else if (len == 5)
		sort_5_nums(a, b);
	else if (len < 350)
		sort_many_nums(a, b, ft_lstsize(*a) / 20 + 1, 20);
	else
		sort_many_many_nums(a, b, ft_lstsize(*a) / 45 + 1, 45);
}
