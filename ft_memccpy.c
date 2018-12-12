/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kirill <kirill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 01:02:07 by kirill            #+#    #+#             */
/*   Updated: 2018/12/13 02:09:29 by kirill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char				*d;
	const unsigned char	*s;
	unsigned char		f;

	d = dst;
	s = src;
	f = c;

	while (n && *s != f)
	{
		*d++ = *s++;
		--n;
	}
	if (!n)
		return (NULL);
	else
		{
			*d++ = *s;
			return (d);
		}
}
