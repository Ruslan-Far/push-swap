/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   use_insts.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljaehaer <ljaehaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:33:42 by ljaehaer          #+#    #+#             */
/*   Updated: 2022/01/17 00:56:23 by ljaehaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"
#include "../libft/libft.h"
#include "../incs/push_swap_bonus.h"

void	use_insts(t_list **a, t_list **b, t_list **insts)
{
	t_list	*head;

	head = *insts;
	while (*insts)
	{
		if (is_push((char *)(*insts)->content))
			call_push(a, b, (char *)(*insts)->content);
		else if (is_reverse_rotate((char *)(*insts)->content))
			call_reverse_rotate(a, b, (char *)(*insts)->content);
		else if (is_rotate((char *)(*insts)->content))
			call_rotate(a, b, (char *)(*insts)->content);
		else
			call_swap(a, b, (char *)(*insts)->content);
		*insts = (*insts)->next;
	}
	*insts = head;
}
