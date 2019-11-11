/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:05:08 by ccardozo          #+#    #+#             */
/*   Updated: 2019/11/07 15:02:19 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include "ft_strlcat.c"

size_t ft_strlcat();

int main () {

	char dst[] = "made";
	char src[] = "holaadios";
	
	printf("\n\nResultado de la funcion original strchr\n");
	printf("Antes:\n%s\n%s", dst, src);
	printf("\n%lu",strlcat(dst, src, 5));

	printf("\n\nResultado de la funcion original strchr\n");
	printf("Antes:\n%s\n%s", dst, src);
	printf("\n%lu",ft_strlcat(dst, src, 5));
	
 	return(0);
}
