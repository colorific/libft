/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kirill <kirill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 17:29:11 by kirill            #+#    #+#             */
/*   Updated: 2018/12/11 17:41:19 by kirill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t len;
	const char *ptr;

	len = ft_strlen(s);
	ptr = s + len;
	while (*ptr != (char)c)
		{
			ptr--;
			if (ptr < s)
				return (NULL);
		}
	return ((char *)ptr);
}
