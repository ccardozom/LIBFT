/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 08:20:01 by ccardozo          #+#    #+#             */
/*   Updated: 2019/11/15 16:26:32 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int res;
	int negativo;
	int result;

	res = 0;
	negativo = 1;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t' ||
			*str == '\v' || *str == '\f' || *str == '\r'))
		str++;
	if (*str == '-')
	{
		negativo = -1;
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - 48;
		str++;
	}
	result = res * negativo;
	if (result > 2147483647)
		return (-1);
	if (result < -2147483648)
		return (0);
	return (result);
}
