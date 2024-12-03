/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 17:31:26 by icunha-t          #+#    #+#             */
/*   Updated: 2024/12/03 17:50:27 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	int	r;
	unsigned int	i = 0;
	
	if (len == 0)
		return (0);
	r = tab[i];
	while (i < len)
	{
		if (r < tab[i])
			r = tab[i];
		i++;
	}
	return (r);
}
/*
int	main(void)
{
	int	tab[6] = {1, 2, 57, 7, 109, 0};
	int	max_nb = max(tab, 6);
	printf("%d\n", max_nb);
	return (0);
}
*/