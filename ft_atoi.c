/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kirill <kirill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 15:01:43 by kirill            #+#    #+#             */
/*   Updated: 2018/12/13 16:23:59 by kirill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*ft_check_pre(const char *po, int *sign)
{
	if (*po == '-')
	{
		*sign = -1;
		po++;
	}
	else if (*po == '+')
		po++;
	while (*po == '0')
		po++;
	return (po);
}

int					ft_atoi(const char *str)
{
	long int		test;
	long int		res;
	int				sign;

	res = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	str = ft_check_pre(str, &sign);
	while (ft_isdigit(*str))
	{
		test = res;
		res = res * 10 + (*str - 48);
		if (test >= res)
			return (sign > 0 ? -1 : 0);
		str++;
	}
	return (res * sign);
}
