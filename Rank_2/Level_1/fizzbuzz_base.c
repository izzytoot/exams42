/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 11:25:21 by root              #+#    #+#             */
/*   Updated: 2024/12/02 11:48:28 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putnbr_base (int i)
{
	char	*base = "0123456789";
	
	if (i > 9)
		putnbr_base(i / 10);
	write (1, &base[i % 10], 1);
}

int	main(void)
{
	int	i = 1;

	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			write (1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write (1, "fizz", 4);
		else if (i % 5 == 0)
			write (1, "buzz", 4);
		else
			putnbr_base(i);
		i++;
		write (1, "\n", 1);
	}
	return (0);
}
