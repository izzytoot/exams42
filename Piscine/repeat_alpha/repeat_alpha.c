/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 09:10:36 by icunha-t          #+#    #+#             */
/*   Updated: 2024/09/20 09:10:37 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	r;
	
	i = 0;			
	if (argc != 2)
	{
		write (1, "\n", 1);
	}
	else
	{
		while (argv[1][i] != '\0')
		{
			r = 1;
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				r = r + argv[1][i] - 'a';
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				r = r + argv[1][i] - 'A';
			}
			while (r != 0)
			{
				write (1, &argv[1][i], 1);
				r--;
			}
			i++;
		}
		write (1, "\n", 1);
	}
	return (0);
}
