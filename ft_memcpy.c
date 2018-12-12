/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kirill <kirill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 23:39:45 by kirill            #+#    #+#             */
/*   Updated: 2018/12/13 00:58:56 by kirill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *ndest;
	const char *nsrc;

	ndest = dst;
	nsrc = src;
	while (n--)
		*ndest++ = *nsrc++;
	return (dst);
}
