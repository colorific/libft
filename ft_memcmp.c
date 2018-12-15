/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forange- <forange-@student.fr.42>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 20:01:08 by forange-          #+#    #+#             */
/*   Updated: 2018/12/15 21:34:09 by forange-         ###   ########.fr       */
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
	while ((flag = (*str1 == *str2)) && n--)
	{
		str1++;
		str2++;
	}
	if (!n)
		return (0);
	return (flag ? 0 : (*str1 - *str2));
}
