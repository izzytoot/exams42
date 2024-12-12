/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:27:17 by icunha-t          #+#    #+#             */
/*   Updated: 2024/12/10 13:36:38 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_swap(int *a, int *b)
{
	int	temp = *a;
	*a = *b;
	*b = temp;
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *lst_start;
	
	if (!lst)
		return (NULL);
	lst_start = lst;
	while(lst->next)
	{
		if ((*cmp)(lst->data, lst->next->data) == 0)
		{
			ft_swap(&lst->data, &lst->next->data);
			lst = lst_start;
		}
		else
			lst = lst->next;
	}
	return (lst_start);
}
