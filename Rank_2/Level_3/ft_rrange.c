/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 15:37:14 by icunha-t          #+#    #+#             */
/*   Updated: 2024/12/09 15:50:56 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_rrange(int start, int end)
{
	int	*result;
	int	size;
	int i = 0;
	
	if (start >= end)
		size = start - end + 1;
	if (start <= end)
		size = end - start + 1;
	result = malloc(sizeof(int) * size);
	if (!result)
		return (0);
	if (end >= start)
	{
		while (i < size)
		{
			result[i] = end;
			end --;
			i++;
		}	
	}
	else
	{
		while (i < size)
		{
			result[i] = end;
			end ++;
			i++;
		}	
	}
	return (result);
}

int	main(void)
{
	int	start = 0;
	int	end = -3;
	int	*result = ft_rrange(start, end);
	int size;
	int i = 0;

	if (start <= end)
		size = end - start + 1;
	else
		size = start - end + 1;
	while (i < size)
	{
		printf("%d ", result[i]);
		i++;
	}
	free(result);
	return (0);
}
