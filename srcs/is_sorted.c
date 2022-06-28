/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljaehaer <ljaehaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 19:48:08 by ljaehaer          #+#    #+#             */
/*   Updated: 2022/01/16 20:11:59 by ljaehaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"
#include "../libft/libft.h"

int	a_is_sorted(t_list *a)
{
	t_list	*t;

	while (a)
	{
		t = a->next;
		while (t)
		{
			if ((*(int *)(a->content)) > (*(int *)(t->content)))
				return (0);
			t = t->next;
		}
		a = a->next;
	}
	return (1);
}

int	b_is_sorted(t_list *b)
{
	t_list	*t;

	while (b)
	{
		t = b->next;
		while (t)
		{
			if ((*(int *)(b->content)) < (*(int *)(t->content)))
				return (0);
			t = t->next;
		}
		b = b->next;
	}
	return (1);
}
