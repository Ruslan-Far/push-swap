/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljaehaer <ljaehaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 19:08:47 by ljaehaer          #+#    #+#             */
/*   Updated: 2022/01/17 14:57:50 by ljaehaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "../libft/libft.h"

int		is_push(char *inst);
void	call_push(t_list **a, t_list **b, char *inst);
void	p_a(t_list **a, t_list **b);
void	p_b(t_list **b, t_list **a);

int		is_reverse_rotate(char *inst);
void	call_reverse_rotate(t_list **a, t_list **b, char *inst);
void	r_r_a(t_list **a);
void	r_r_b(t_list **b);
void	r_r_r(t_list **a, t_list **b);

int		is_rotate(char *inst);
void	call_rotate(t_list **a, t_list **b, char *inst);
void	r_a(t_list **a);
void	r_b(t_list **b);
void	r_r(t_list **a, t_list **b);

int		is_swap(char *inst);
void	call_swap(t_list **a, t_list **b, char *inst);
void	s_a(t_list **a);
void	s_b(t_list **b);
void	s_s(t_list **a, t_list **b);

void	use_insts(t_list **a, t_list **b, t_list **insts);
t_list	*read_insts(t_list **a);

#endif