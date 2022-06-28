/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_many_many_nums.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljaehaer <ljaehaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 17:08:16 by ljaehaer          #+#    #+#             */
/*   Updated: 2022/01/16 15:48:31 by ljaehaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"
#include "../libft/libft.h"

void	sort_many_many_nums(t_list **a, t_list **b, int rows, int cols)
{
	int	**groups;
	int	*arr;
	int	len;

	len = ft_lstsize(*a);
	arr = conv_to_arr(*a, len);
	arr_sort(arr, len);
	groups = gen_groups(rows, cols);
	init_groups_many(groups, rows, arr, len);
	free(arr);
	run_in_groups_many(groups, rows, a, b);
	while (*b)
	{
		pre_b_to_pa(b);
		pa(a, b);
	}
	clean_groups(groups, rows);
}
