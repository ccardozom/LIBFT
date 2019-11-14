/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 08:58:33 by ccardozo          #+#    #+#             */
/*   Updated: 2019/11/14 16:34:46 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int		nbr_words(char *str)
{
	int		nb;
	int		i;

	nb = 0;
	i = 0;
	while (str[i] == '\t' || str[i] == ' ' || str[i] == '\n')
		i++;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && str[i] != '\t' && str[i] != ' ' && str[i] != '\n')
			i++;
		if (str[i] == '\0')
		{
			nb++;
			break ;
		}
		if (str[i] == '\t' || str[i] == ' ' || str[i] == '\n')
			nb++;
		while (str[i] == '\t' || str[i] == ' ' || str[i] == '\n')
			i++;
	}
	return (nb);
}

char    **ft_split(char *str)
{
	char	**tab;
	int		words;
	int		letters;
	int		var;
	int		i;
	int		o;

	i = 0;
	o = 0;
	if (str == NULL)
	{
		tab = (char**)malloc(sizeof(char*));
		tab[o] = NULL;
		return (tab);
	}
	words = nbr_words(str);
	if (!(tab = (char**)malloc(sizeof(char*) * words + 1)))
		return (NULL);	
	while (str[i] == '\t' || str[i] == ' ' || str[i] == '\n')
	    i++;	
	while (str[i] != '\0' && o < words)
	{
		letters = 0;
		while (str[i] != '\0' && str[i] != '\t' && str[i] != ' ' && str[i] != '\n')
		{
			letters++;
			i++;
		}
		if (!(tab[o] = (char*)malloc(sizeof(char) * letters)))
			return (NULL);
		while (str[i] == '\t' || str[i] == ' ' || str[i] == '\n')
			 i++;
		o++;
	}
	tab[o] = NULL;
	i = 0;
	o = 0;
	var = 0;
	while (str[i] == '\t' || str[i] == ' ' || str[i] == '\n')
	   	i++;
	while (str[i] != '\0')
	{
		var = 0;
		while (str[i] != '\0' && str[i] != '\t' && str[i] != ' ' && str[i] != '\n')
		{
			tab[o][var] = str[i];
			var++;
		 	i++;
		}
		if (str[i] == '\t' || str[i] == ' ' || str[i] == '\n')
			o++;
		while (str[i] == '\t' || str[i] == ' ' || str[i] == '\n')
			i++;
	}	
	return (tab);
}
