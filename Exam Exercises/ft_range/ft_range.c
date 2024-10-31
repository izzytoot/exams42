/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 15:35:08 by icunha-t          #+#    #+#             */
/*   Updated: 2024/09/26 15:35:09 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end)
{
	int	*result;
	int	s;
	int	i;
	
	if (start == end)
	{
		s = 1;
	}
	if (end > start)
	{
		s = (end - start) + 1;
	}
	if (start > end)
	{
		s = (start - end) + 1;
	}
	result = (int *)malloc(sizeof(int) * s);
	if (! result)
		return (NULL);
	i = 0;
	if (start != end)
	{
		if (start > end)
		{
			while (end != start)
			{
				result[i] = start;
				start++;
				i--;
			}
		}
		if (start < end)
		{
			while (start != end)
			{
				result[i] = start;
				start++;
				i++;
			}
		}
	}
	result[i] = start;
	return (result);
}

int	main(void)
{
	int	size;
	int	start;
	int	end;
	int	i;
	int	*result;
	
	start = 0;
	end = -3;
	if (start == end)
	{
		size = 1;
	}
	if (end > start)
	{
		size = (end - start) + 1;
	}
	if (start > end)
	{
		size = (start - end);
	}
	result = ft_range(start, end);
	i = 0;
	while (i < size)
	{
		printf ("%i ", result[i]);
		i++;
	}
	free(result);
	return (0);	
}
