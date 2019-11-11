/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:05:08 by ccardozo          #+#    #+#             */
/*   Updated: 2019/11/07 13:01:26 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include "ft_strncmp.c"

int ft_strncmp();

int main () {

	char src1[] = "copia de la funcion";
	char src2[] = "copia de la funcion";
	
	printf("\n\nResultado de la funcion original strchr\n");
	printf("Antes:\n%s", src1);
	printf("\n%d",strncmp(src1, src2, 5));

	printf("\n\nResultado de la funcion ft_strchr\n");
	printf("Antes:\n%s", src2);
	printf("\n%d",ft_strncmp(src1, src2, 5));

 	return(0);
}
