/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:05:08 by ccardozo          #+#    #+#             */
/*   Updated: 2019/11/06 15:46:13 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include "ft_memchr.c"

void *ft_memchr();

int main () {

	char src1[] = "copia de la funcion";
 
	
	printf("\n\nResultado de la funcion original strchr\n");
	printf("Antes:\n%s", src1);
	printf("\n%s",memchr(src1, 'm', 6));

	printf("\n\nResultado de la funcion ft_strchr\n");
	printf("Antes:\n%s", src1);
	printf("\n%s",ft_memchr(src1, 'm', 6));

 	return(0);
}
