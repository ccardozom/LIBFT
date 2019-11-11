/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memccpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:05:08 by ccardozo          #+#    #+#             */
/*   Updated: 2019/11/05 18:40:01 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include "ft_memccpy.c"

void *ft_memccpy();

int main () {
	char src[] = "funcion memccpy";
	char dst[20]; 
	char src1[] = "copia funcion memccpy copia";

	printf("Antes de la funcion:\n%s", src1);
	memccpy(dst, src1, 'r', 8);
	printf("\nDespues de la funcion:\n%s", dst);

	printf("\nAntes de la funcion:\n%s", src1);
	memccpy(dst, src, 'r', 6);
	printf("\nDespues de la funcion:\n%s",dst);

   return(0);
}
