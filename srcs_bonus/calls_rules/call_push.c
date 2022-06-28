/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljaehaer <ljaehaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 18:46:25 by ljaehaer          #+#    #+#             */
/*   Updated: 2022/01/17 00:55:29 by ljaehaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/push_swap.h"
#include "../../libft/libft.h"
#include "../../incs/push_swap_bonus.h"

int	is_push(char *inst)
{
	static char	*rules_push[] = {"pa\n", "pb\n", 0};
	int			i;
	size_t		len_inst;

	i = 0;
	len_inst = ft_strlen(inst);
	while (rules_push[i])
	{
		if (!ft_strncmp(inst, rules_push[i], len_inst))
		{
			if (len_inst == ft_strlen(rules_push[i]))
				return (1);
			return (0);
		}
		i++;
	}
	return (0);
}

void	call_push(t_list **a, t_list **b, char *inst)
{
	if (!ft_strncmp(inst, "pa\n", 3))
		p_a(a, b);
	else
		p_b(b, a);
}
