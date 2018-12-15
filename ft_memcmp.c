/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kirill <kirill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 20:01:08 by forange-          #+#    #+#             */
/*   Updated: 2018/12/16 00:34:37 by kirill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int						ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	int					flag;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	if (!n)
		return (0);
	while (n-- && (flag = (*str1 == *str2)))
	{
		str1++;
		str2++;
	}
	if (!n && flag)
		return (0);
	return (flag ? 0 : (*str1 - *str2));
}
