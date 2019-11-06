/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memccpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:05:08 by ccardozo          #+#    #+#             */
/*   Updated: 2019/11/06 14:42:22 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include "ft_strrchr.c"

char *ft_strrchr();

int main () {

	char src1[] = "copia de la funcion";
	char src2[] = "copia de la funcion";
	
	printf("\n\nResultado de la funcion original strchr\n");
	printf("Antes:\n%s", src1);
	printf("\n%s",strrchr(src1, 'm'));

	printf("\n\nResultado de la funcion ft_strchr\n");
	printf("Antes:\n%s", src2);
	printf("\n%s",ft_strrchr(src2, 'm'));

 	return(0);
}
