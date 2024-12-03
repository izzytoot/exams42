/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:26:54 by icunha-t          #+#    #+#             */
/*   Updated: 2024/12/03 13:47:41 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	main(int ac, char **av)
{
	int	sum;
	int	mult;
	int	sub;
	int	div;
	int	mod;
	
	if (ac == 4)
	{
		if (av[2][0] == '+')
		{
			sum = atoi(av[1]) + atoi(av[3]);
			printf("%d\n", sum);
		}
		else if (av[2][0] == '*')
		{
			mult = atoi(av[1]) * atoi(av[3]);
			printf("%d\n", mult);
		}
		else if (av[2][0] == '-')
		{
			sub = atoi(av[1]) - atoi(av[3]);
			printf("%d\n", sub);
		}
		else if (av[2][0] == '/')
		{
			div = atoi(av[1]) / atoi(av[3]);
			printf("%d\n", div);
		}
		else if (av[2][0] == '%')
		{
			mod = atoi(av[1]) % atoi(av[3]);
			printf("%d\n", mod);
		}
	}
	else
		write (1, "\n", 1);
	return (0);
}