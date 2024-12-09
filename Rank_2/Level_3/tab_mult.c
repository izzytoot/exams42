/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:50:26 by icunha-t          #+#    #+#             */
/*   Updated: 2024/12/09 18:02:58 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i = 0;
	int	r = 0;

	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - 48);
		i++;
	}
	return (r);
}
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb /10);
		ft_putnbr(nb % 10);
	}

	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + 48);
}
int	main (int ac, char **av)
{	
	if (ac < 2)
		write (1, "\n", 1);
	else
	{
		int	tab = ft_atoi(av[1]);
		int	i = 1;
		while (i <= 9)
		{
			ft_putnbr(i);
			write (1, " x ", 3);
			ft_putnbr(tab);
			write (1, " = ", 3);
			ft_putnbr(i * tab);
			write (1, "\n", 1);
			i++;
		}	
	}
	return (0);
}
