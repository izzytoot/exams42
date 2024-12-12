/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 11:11:15 by icunha-t          #+#    #+#             */
/*   Updated: 2024/12/12 11:19:51 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

//atoi do arg
//se 1, 1
//n comeca em 2 e enquanto nao chegar a nb
	//se for divisor de nb
		//printa n enquanto ano chega a nb (aqui da break)
		//printa *
		//nb passa a nb / n
		//n volta a 2
	//aumenta n

int	main(int ac, char **av)
{
	int	n;
	int nb;
	
	if (ac == 2)
	{
		nb = atoi(av[1]);
		if (nb == 1)
			printf("1");
		n = 2;
		while (n <= nb)
		{
			if (nb % n == 0)
			{
				printf("%d", n);
				if (n == nb)
					break;
				printf("*");
				nb = nb / n;
				n = 2;
			}
			n++;
		}
	}
	printf("\n");
	return (0);
}
