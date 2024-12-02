/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz_without base.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 11:01:55 by root              #+#    #+#             */
/*   Updated: 2024/12/02 11:44:03 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
void	putnbr(int	i)
{
	char	r;
	r = i;
	if (i > 9)
	{
		putnbr (i / 10);
		putnbr (i % 10);
	}
	if (i >= 0 && i <=9)
		ft_putchar(r + 48);
}

int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			write (1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write (1, "buzz", 4);
		else
			putnbr(i);
		i++;
		write (1, "\n", 1);
	}
	return (0);
}