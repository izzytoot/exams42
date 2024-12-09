/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:32:38 by icunha-t          #+#    #+#             */
/*   Updated: 2024/12/04 11:51:51 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

int	ft_list_size(t_list *begin_list)
{
	int	count = 0;
	
	if (begin_list == 0)
		return (0);
	while (begin_list->next)
		count++;
	return (count);
}

/*
int	main (void)
{
	t_list *begin_list = NULL;
	printf ("%d", ft_list_size(begin_list));
	return (0);
}
*/