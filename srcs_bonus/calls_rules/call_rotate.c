/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljaehaer <ljaehaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 19:00:47 by ljaehaer          #+#    #+#             */
/*   Updated: 2022/01/17 00:55:22 by ljaehaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/push_swap.h"
#include "../../libft/libft.h"
#include "../../incs/push_swap_bonus.h"

int	is_rotate(char *inst)
{
	static char	*rules_reverse_rotate[] = {"ra\n", "rb\n", "rr\n", 0};
	int			i;
	size_t		len_inst;

	i = 0;
	len_inst = ft_strlen(inst);
	while (rules_reverse_rotate[i])
	{
		if (!ft_strncmp(inst, rules_reverse_rotate[i], len_inst))
		{
			if (len_inst == ft_strlen(rules_reverse_rotate[i]))
				return (1);
			return (0);
		}
		i++;
	}
	return (0);
}

void	call_rotate(t_list **a, t_list **b, char *inst)
{
	if (!ft_strncmp(inst, "ra\n", 3))
		r_a(a);
	else if (!ft_strncmp(inst, "rb\n", 3))
		r_b(b);
	else
		r_r(a, b);
}
