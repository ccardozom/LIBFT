/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 08:58:33 by ccardozo          #+#    #+#             */
/*   Updated: 2019/11/15 08:34:19 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_split(char *str)
{
	int		i;
	int		j;
	int		k;
	int		o;
	char	**split;
	
	o = 0;
	if (str == NULL)
	{
		split = (char**)malloc(sizeof(char*));
		split[o] = NULL;
		return (split);
	}
	i = 0;
	k = 0;
	if (!(split = (char **)malloc(sizeof(char *) * 256)))
		return (NULL);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i += 1;
	while (str[i])
	{
		j = 0;
		if (!(split[k] = (char *)malloc(sizeof(char) * 4096)))
			return (NULL);
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
			split[k][j++] = str[i++];
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i += 1;
		split[k][j] = '\0';
		k += 1;
	}
	split[k] = NULL;
	return (split);
}
