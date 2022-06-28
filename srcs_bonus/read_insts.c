/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_insts.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljaehaer <ljaehaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:33:26 by ljaehaer          #+#    #+#             */
/*   Updated: 2022/01/17 14:23:03 by ljaehaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"
#include "../libft/libft.h"
#include "../incs/push_swap_bonus.h"

static int	check_inst(char *inst)
{
	static char	*rules[] = {"pa\n", "pb\n", "rra\n", "rrb\n", "rrr\n",
		"ra\n", "rb\n", "rr\n", "sa\n", "sb\n", "ss\n", 0};
	int			i;
	size_t		len_inst;

	i = 0;
	len_inst = ft_strlen(inst);
	while (rules[i])
	{
		if (!ft_strncmp(inst, rules[i], len_inst))
		{
			if (len_inst == ft_strlen(rules[i]))
				return (1);
			return (0);
		}
		i++;
	}
	return (0);
}

static void	ft_end(t_list **a, t_list **insts, char *inst)
{
	free(inst);
	ft_lstclear(insts, del);
	put_error(*a);
}

t_list	*read_insts(t_list **a)
{
	char	*inst;
	ssize_t	n;
	t_list	*insts;

	inst = malloc(sizeof(char) * 9999999);
	insts = NULL;
	while (1)
	{
		ft_bzero(inst, 9999999);
		n = read(0, inst, 9999998);
		if (n < 0)
			ft_end(a, &insts, inst);
		if (n > 0)
		{
			if (check_inst(inst))
				ft_lstadd_back(&insts, ft_lstnew(ft_strdup(inst)));
			else
				ft_end(a, &insts, inst);
		}
		else
		{
			free(inst);
			return (insts);
		}
	}
}
