/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 16:25:44 by icunha-t          #+#    #+#             */
/*   Updated: 2024/12/09 16:43:05 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + 48);
}

int	main(int ac, char **av)
{	
	(void)av;
	
	if (ac < 2)
		write(1, "0\n", 2);
	if (ac > 1)
	{
		ft_putnbr(ac - 1);
		write(1, "\n", 1);
	}
	return (0);
}
