/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljaehaer <ljaehaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 15:27:44 by ljaehaer          #+#    #+#             */
/*   Updated: 2022/01/07 17:24:49 by ljaehaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/push_swap.h"
#include "../../libft/libft.h"

int	*conv_to_arr(t_list *x, int len)
{
	int	i;
	int	*arr;

	arr = malloc(sizeof(int) * len);
	i = 0;
	while (i < len)
	{
		arr[i++] = *((int *)x->content);
		x = x->next;
	}
	return (arr);
}

void	arr_sort(int *arr, int len)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	**gen_groups(int rows, int cols)
{
	int	i;
	int	**groups;

	groups = malloc(sizeof(int *) * rows);
	i = 0;
	while (i < rows)
		groups[i++] = malloc(sizeof(int) * cols);
	return (groups);
}

void	clean_groups(int **groups, int rows)
{
	int	i;

	i = 0;
	while (i < rows)
		free(groups[i++]);
	free(groups);
}
