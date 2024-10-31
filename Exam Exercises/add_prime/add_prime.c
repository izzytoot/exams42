/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:34:04 by icunha-t          #+#    #+#             */
/*   Updated: 2024/09/26 13:34:05 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (i < nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_atoi(const char *str)
{
		int	i;
	int	sym;
	int	r;
	
	i = 0;
	sym = 1;
	r = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{	
		i++;
	}
	if (str[i] == '-')
	{
		sym = -1;
	}
	if (str[i] == '+' || str[i] == '-')
	{	
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	return (sym * r);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb >= 0 && nb <= 9)
	{
		ft_putchar (nb + '0');
	}
}

int	ft_sum_prime(int nb)
{
	int	r;
	int	i;
	
	i = 0;
	r = 0;
	while (i <= nb)
	{
		if (ft_prime(i) == 1)
		{
			r = r + i;
		}
		i++;
	}
	return (r);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	nb;
	
	i = 0;
	nb = 0;
	if (argc != 2)
	{
		write (1, "0\n", 2);
		return (0);
	}
	if (argc == 2)
	{
		nb = ft_atoi(argv[1]);
		if (nb <= 0)
		{
			write (1, "0\n", 2);
			return (0);
		}
		if (nb > 0)
		{
			nb = ft_sum_prime(nb);
		}
		ft_putnbr(nb);
	}
	return (0);
}
