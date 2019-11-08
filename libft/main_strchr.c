/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memccpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:05:08 by ccardozo          #+#    #+#             */
/*   Updated: 2019/11/07 12:41:49 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include "ft_strchr.c"

char *ft_strchr();

int main () {

	char src1[] = "copia de la funcion";
 
	
	printf("\n\nResultado de la funcion original strchr\n");
	printf("Antes:\n%s", src1);
	printf("\n%s",strchr(src1, 'l'));

	printf("\n\nResultado de la funcion ft_strchr\n");
	printf("Antes:\n%s", src1);
	printf("\n%s",ft_strchr(src1, 'l'));

 	return(0);
}
