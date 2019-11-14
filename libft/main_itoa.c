/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:20:34 by ccardozo          #+#    #+#             */
/*   Updated: 2019/11/14 18:12:16 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_itoa.c"

char	*ft_itoa();

int main()
{
	
//	printf("\nEs un caracter 1234:  %d\n", itoi("\n34"));
	printf("\nEs un digito es 1234:  %s\n", ft_itoa('i'));
	return 0;
}
