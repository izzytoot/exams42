/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:21:20 by icunha-t          #+#    #+#             */
/*   Updated: 2024/09/20 13:21:21 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	
	i = 0;
	if (argc != 2)
	{
		write (1, "\n", 1);
	}
	if (argc == 2)
	{
		while (argv[1][i])
		{
			while (argv[1][i] == 32 || argv[1][i] >= 9 && argv[1][i] <= 13)
			{
				i++;
			}
			while (argv[1][i] != 32 && (argv[1][i] < 9 && argv[1][i] > 13) && argv[1][i] != '\0')
			{
				write (1, &argv[1][i], 1);
				i++;
			}
			if (argv[1][i] == ' ' || (argv[1][i] >= 9 && argv[1][i] <= 13) || argv[1][i] == '\0')
			{
				break;
			}
			write (1, "\n", 1);
		}
	}
	return (0);
}
