/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 16:13:22 by icunha-t          #+#    #+#             */
/*   Updated: 2024/12/09 16:25:31 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	lcm(unsigned int a, unsigned int b)
{
	int	n = 0;
	
	if (!a || !b)
		return (0);
	if (a > b)
		n = a;
	else 
		n = b;
	while(1)
	{
		if (n % a == 0 && n % b == 0)
			return n;
		n++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int a = 50;
	int b = 6;
	
	printf("%u", lcm(a, b));
	return (0);
}
*/