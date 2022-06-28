/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljaehaer <ljaehaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 19:01:14 by ljaehaer          #+#    #+#             */
/*   Updated: 2022/01/17 01:00:19 by ljaehaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/push_swap.h"
#include "../../libft/libft.h"
#include "../../incs/push_swap_bonus.h"

int	is_swap(char *inst)
{
	static char	*rules_swap[] = {"sa\n", "sb\n", "ss\n", 0};
	int			i;
	size_t		len_inst;

	i = 0;
	len_inst = ft_strlen(inst);
	while (rules_swap[i])
	{
		if (!ft_strncmp(inst, rules_swap[i], len_inst))
		{
			if (len_inst == ft_strlen(rules_swap[i]))
				return (1);
			return (0);
		}
		i++;
	}
	return (0);
}

void	call_swap(t_list **a, t_list **b, char *inst)
{
	if (!ft_strncmp(inst, "sa\n", 3))
		s_a(a);
	else if (!ft_strncmp(inst, "sb\n", 3))
		s_b(b);
	else
		s_s(a, b);
}
