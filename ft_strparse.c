/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strparse.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kirill <kirill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 17:21:07 by kirill            #+#    #+#             */
/*   Updated: 2018/12/18 22:06:33 by kirill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strparse(const char *s, char c, size_t *words)
{
	size_t len;

	*words = 0;
	len = 0;
	while(*s++)
	{
		if (*(s - 1) != c && (*s == c || !*s))
			(*words)++;
		len++;
	}
	return (len);
}
