/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:47:10 by icunha-t          #+#    #+#             */
/*   Updated: 2024/09/19 16:47:11 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>
*/
void	ft_swap(int *a, int *b)
{
	int	temp;
	
	temp = *a;
	*a = *b;
	*b = temp;	
}
/*
int	main(void)
{
	int	a;
	int	b;
	
	a = 10;
	b = 20;
	printf ("%i, %i.\n", a, b);
	ft_swap(&a, &b);
	printf ("%i, %i.\n", a, b);
	return (0);
}
*/
