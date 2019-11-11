/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 08:50:37 by ccardozo          #+#    #+#             */
/*   Updated: 2019/11/11 14:20:09 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ft_calloc.c"

void	*ft_calloc();
int main()
{
	char *p;
	char *m;
	int i = 0;
	p = calloc(5, sizeof(int));
	while (i < 5)
	{
		printf("\nP[%d]: %d\n",i,p[i]);
		i++;
	}
	free(p);

	m = ft_calloc(5, sizeof(int));
	i = 0;
	while (i < 5)
	{
		printf("\nM[%d]: %d\n",i,m[i]);
		i++;
	}
	free(m);
}
