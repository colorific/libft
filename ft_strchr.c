/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kirill <kirill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 22:14:32 by forange-          #+#    #+#             */
/*   Updated: 2018/12/11 17:26:34 by kirill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	size_t	size;
	char	*end;

	size = ft_strlen(s);
	end = (char *)s + size;
	if (!size)
	{
		end = ((char)c == 0 ? (char *)s : NULL);
		return (end);
	}
	else
	{
		while (s <= end)
		{
			if (*s == (char)c)
				return ((char *)s);
			s++;
		}
		return (NULL);
	}
}