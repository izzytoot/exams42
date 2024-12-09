/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 11:20:16 by icunha-t          #+#    #+#             */
/*   Updated: 2024/12/09 12:19:37 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_is_prime(int	n)
{
	int	i = 2;
	if (n == 1)
		return (0);
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

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

void ft_putnbr(int i)
{
	if (i > 9)
	{
		ft_putnbr (i / 10);
		ft_putnbr (i % 10);
	}
	if (i >= 0 && i <= 9)
		ft_putchar(i + 48);
}

int	main(int ac, char **av)
{
	int	i = 0;
	int	r = 0;
	
	if (ac == 2)
	{
		int	nb = ft_atoi(av[1]);
		if (nb <= 0 || !(ft_is_prime(nb)))
			write (1, "0\n", 2);
		while (i <= nb)
		{
			if (ft_is_prime(i))
				r = r + i;
			i++;
		}
		ft_putnbr(r);
	}
	if (ac != 2)
		ft_putnbr(0);
	write (1, "\n", 1);
	return (0);
}
