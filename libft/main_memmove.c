/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memccpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:05:08 by ccardozo          #+#    #+#             */
/*   Updated: 2019/11/06 12:16:00 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include "ft_memmove.c"

void *ft_memmove();

int main () {

	char src1[] = "copia de la funcion";
	char src2[] = "copia de la funcion"; 
	
	printf("\n\nResultado de la funcion original memmove\n");
	printf("Antes:\n%s", src1);
	memmove(src1 + 6, src1, 5);
	printf("\nDespues:\n%s", src1);

	printf("\n\nResultado de la funcion ft_memmove");

	printf("\nAntes:\n%s", src2);
	ft_memmove(src2 + 6, src2, 5);
	printf("\nDespues:\n%s",src2);

   return(0);
}
