/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:20:34 by ccardozo          #+#    #+#             */
/*   Updated: 2019/11/07 09:38:22 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "ft_isdigit.c"

int	ft_isdigit();

int main()
{
	printf("\nEl resultado puede ser 0(no es un digito) o 1(si es un digito):  %d\n", isdigit('a'));
	printf("\nEl resultado puede ser 0(no es un digito) o 1(si es un digito):  %d\n", ft_isdigit('a'));
	return 0;
}
