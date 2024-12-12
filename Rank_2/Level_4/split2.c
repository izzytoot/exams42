/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 11:47:33 by icunha-t          #+#    #+#             */
/*   Updated: 2024/12/12 13:11:57 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char *ft_strncpy(char *dest, const char *src, int n)
{
	int	i = 0;
	
	while(src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char    **ft_split(char *str)
{
	int	i = 0;
	int	wc = 0;
	int w = 0;
	int word_start;
	int	word_end;
	char **result;
	
	if (!str)
		return (NULL);
	while (str[i])
	{
		while (str[i] == ' ' || ((str[i]) >= 9 && str[i] <= 13))
			i++;
		i++;
		if (str[i])
			wc++;
		else if(!str[i])
			break;
		while (str[i] != ' ' && (!((str[i]) >= 9 && str[i] <= 13)))
			i++;
		i++;
	}
	result = (char **)malloc(sizeof(char *) * (wc + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' '|| ((str[i]) >= 9 && str[i] <= 13)))
			i++;
		word_start = i;
		while (str[i] && (str[i] != ' ' && (!((str[i]) >= 9 && str[i] <= 13))))
			i++;
		word_end = i;
		if (word_start < word_end)
		{
			result[w] = (char *) malloc(sizeof(char) * ((word_end - word_start) + 1));
			ft_strncpy(result[w++], &str[word_start], word_end - word_start);
		}
		result[w] = NULL;
	}		
	return (result);
}

int	main(void)
{
	char *str = "duas palavras";
	char **result = ft_split(str);
	int	i = 0;
	
	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	free(result);
	return (0);
}
