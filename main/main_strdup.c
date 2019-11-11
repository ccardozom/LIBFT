/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 08:50:37 by ccardozo          #+#    #+#             */
/*   Updated: 2019/11/08 09:24:47 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ft_strdup.c"

char	*ft_strdup();
int main()
{
	char a[] = "prueba de funcion original";
	char b[] = "prueba de funcion original";

	printf("\nAntes: \n%s\nDespues: \n%s\n",a,strdup(a));
	printf("\n\nAntes: \n%s\nDespues: \n%s\n",a,ft_strdup(b));
}
