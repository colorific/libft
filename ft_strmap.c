/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kirill <kirill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 12:34:06 by kirill            #+#    #+#             */
/*   Updated: 2018/12/18 14:00:23 by kirill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *res;
	size_t len;

	res = NULL;
	if (s && f)
	{
		len = ft_strlen(s);
		if((res = (char *)malloc(len + 1)))
		{
			while (*s)
			{
				*res = f(*s);
				res++;
				s++;
			}
			*res = *s;
			res -= len;
		}
	}
	return (res);
}
