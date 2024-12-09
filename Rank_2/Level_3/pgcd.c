/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 16:45:27 by icunha-t          #+#    #+#             */
/*   Updated: 2024/12/09 17:03:01 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	n1 = atoi (av[1]);
	int	n2 = atoi (av[2]);
	
	if (ac == 3)
	{
		if (n1 > 0 && n2 > 0)
		{
			while (n1 != n2)
			{
				if (n1 > n2)
					n1 = n1 - n2;
				else 
					n2 = n2 - n1;
			}
			printf("%d", n1);
		}
	}
	printf("\n");
	return (0);
}
