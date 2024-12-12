/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:05:43 by icunha-t          #+#    #+#             */
/*   Updated: 2024/12/12 11:15:06 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i = 0;
	int r = 0;

	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - 48);
		i++;
	}
	return (r);
}

void ft_printhex(int nb)
{
	char	*hex = "0123456789abcdef";
	
	if (nb >= 16)
		ft_printhex(nb / 16);
	write (1, &hex[nb % 16], 1);
}

int	 main(int ac, char **av)
{
	int	nb;
	
	if (ac == 2)
	{
		nb = ft_atoi(av[1]);
		ft_printhex(nb);
	}
	write (1, "\n", 1);
	return (0);
}
