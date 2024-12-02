/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 12:21:16 by root              #+#    #+#             */
/*   Updated: 2024/12/02 12:28:40 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>
int	main(void)
{
	int	a = 5;
	int	b = 10;

	printf ("before swap: a is %d, b is %d\n", a, b);
	ft_swap(&a, &b);
	printf ("after swap: a is %d, b is %d\n", a, b);
	return (0);
}
*/