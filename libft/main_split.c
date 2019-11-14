/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_split.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:05:08 by ccardozo          #+#    #+#             */
/*   Updated: 2019/11/14 13:09:30 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include "libft.h"
//#include "ft_split.c"

//char **ft_split();

void ft_filas(int f)
{
	char **Matriz;

	if ((*Matriz = (char**)malloc)
}

int main () 
{
	char src[] = "Escuela 42Madrid_Telefonica";
 	char *psrc;
	char *aux;
	int f;
	int c;
	int i;
	int j;

	i = 0; 
	j = 0;
	while (src[i] != '\0')
	{	
		if (src[i] != ' ')
		{
			aux[j] = src[i]
			j++;
		}
		else
		{
			c = ft_strlen(aux);
			f++;
			j = 0;
		}
	ft_filas(f);
	ft_columnas(c);
	

	}
	f = ft_strlen();
	printf("\n\nResultado de la funcion original strchr\n");
	printf("Antes:\n%s", src1);
	printf("\n%s",ft_split(src1,c));
//	printf("\n%d",count_c(src1,'a'));

	
	/*
	printf("\n\nResultado de la funcion ft_strchr\n");
	printf("Antes:\n%s", src1);
	printf("\n%zu",ft_strlen(src1));
*/
 	return(0);
}
