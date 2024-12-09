/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 12:13:48 by icunha-t          #+#    #+#             */
/*   Updated: 2024/12/04 15:27:30 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>

int	count_words(char *str, char sep)
{
	int	i = 0;
	char prev_char = sep;
	int	words = 0;
	
	while (str[i])
	{
		if (str[i] == sep)
			prev_char = str[i];
		if (str[i] != sep)
		{
			if (prev_char == sep)
				words++;
		}
		prev_char = str[i];
		i++;
	}
	return (words);
}

char *ft_strncpy(char *dest, char *src, int n)
{
	int	i = 0;
	int	len = 0;

	while (src[len])
		len++;
	if (n > 0)
	{
		while (src[i] && i < n)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}
char    **ft_split(char *str)
{
	char sep = ' ';
	int	words = count_words(str, sep);
	char **new_array;
	int	i = 0;
	int j = 0;
	int n = 0;
		
	if (!str)
		return (NULL);
	new_array = malloc (sizeof(char *) * (words + 1));
	if (!new_array)
		return (NULL);
	while (str[i])
	{
		while (str[i] && str[i] == sep)
			i++;
		j = i;
		while (str[i] && str[i] != sep)
			i++;
		if (i > j)
		{
			new_array[n] = malloc(sizeof(char) * ((i - j) + 1));
			ft_strncpy(new_array[n++], &str[j], i - j);
		}	
	}
		new_array[n] = NULL;
		return (new_array);
}
/*
int	main(void)
{
	char	*str;
	char	**result;
	int	i;
	
	str = "three words apart";
	result = ft_split(str);
	i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	return (0);
}
*/