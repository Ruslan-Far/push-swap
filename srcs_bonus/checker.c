/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljaehaer <ljaehaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 16:45:16 by ljaehaer          #+#    #+#             */
/*   Updated: 2022/01/17 14:20:18 by ljaehaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"
#include "../libft/libft.h"
#include "../incs/push_swap_bonus.h"

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	t_list	*insts;

	if (argc < 2)
		return (1);
	a = check_for_error_argv(argc, argv);
	b = NULL;
	insts = read_insts(&a);
	use_insts(&a, &b, &insts);
	if (!a_is_sorted(a) || b)
		write(1, "KO\n", 3);
	else
		write(1, "OK\n", 3);
	ft_lstclear(&a, del);
	ft_lstclear(&b, del);
	ft_lstclear(&insts, del);
}
