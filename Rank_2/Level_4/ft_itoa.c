/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 10:39:33 by icunha-t          #+#    #+#             */
/*   Updated: 2024/12/10 11:08:09 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len_digits(int nbr)
{
	int	len = 0;
	
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		len++;
	while(nbr)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

int	sign(int nbr)
{
	if(nbr < 0)
	{
		return (-nbr);
	}
	return (nbr);
}

char	*ft_itoa(int nbr)
{
	int	dig = len_digits(nbr);
	char *str;
	
	str = (char *)malloc(sizeof(char) * (dig + 1));
	if (!str)
		return (NULL);
	if (nbr < 0)
		str[0] = '-';
	if (nbr == 0)
		str[0] = '0';
	str[dig] = '\0';
	while (nbr)
	{
		str[dig - 1] = sign(nbr % 10) + '0';
		nbr = nbr / 10;
		dig--;
	}
	return (str);
}

#include <stdio.h>

int main(void)
{
	printf("%s\n", ft_itoa(-5486));
	return (0);
}
