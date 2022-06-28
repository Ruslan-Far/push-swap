/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_for_error_argv.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljaehaer <ljaehaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 13:40:14 by ljaehaer          #+#    #+#             */
/*   Updated: 2022/01/16 19:02:55 by ljaehaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/push_swap.h"
#include "../../libft/libft.h"

static void	check_for_double(t_list *a)
{
	t_list	*t;
	t_list	*head;

	head = a;
	while (a)
	{
		t = a->next;
		while (t)
		{
			if (*((int *)a->content) == *((int *)t->content))
				put_error(head);
			t = t->next;
		}
		a = a->next;
	}
}

static size_t	numlen(int num)
{
	size_t	len;

	len = 0;
	if (num == 0)
		return (++len);
	if (num < 0)
	{
		len++;
		if (-(num + 1) == __INT32_MAX__)
			return (len + 10);
		num = -num;
	}
	while (num > 0)
	{
		len++;
		num /= 10;
	}
	return (len);
}

static void	compare_lens(t_list *a, char *s, int num)
{
	if (ft_strlen(s) != numlen(num))
		put_error(a);
	if (*s == '-')
		s++;
	if (!ft_isdigit(*s))
		put_error(a);
}

t_list	*check_for_error_argv(int argc, char **argv)
{
	t_list	*a;
	t_list	*new_elem;
	int		num;
	int		*p;
	int		i;

	i = argc;
	a = NULL;
	new_elem = NULL;
	while (i > 1)
	{
		num = ft_atoi(argv[i - 1]);
		compare_lens(a, argv[i - 1], num);
		p = malloc(sizeof(int));
		*p = num;
		new_elem = ft_lstnew(p);
		ft_lstadd_front(&a, new_elem);
		i--;
	}
	check_for_double(a);
	return (a);
}
