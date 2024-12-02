/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:02:01 by root              #+#    #+#             */
/*   Updated: 2024/12/02 18:15:55 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*rev_print(char *str)
{
	int	i = 0;
	
	while (str[i])
		i++;
	while (i--)
		write (1, &str[i], 1);
	write (1, "\n", 1);
	return (str);
}

/*
int main(void)
{
	rev_print("Hello world");
	write (1, "\n", 1);
	rev_print("tnirp esreveR");
	write (1, "\n", 1);
	rev_print("");
	write (1, "\n", 1);
	return (0);
}
*/