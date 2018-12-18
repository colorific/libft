/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kirill <kirill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 16:05:23 by kirill            #+#    #+#             */
/*   Updated: 2018/12/18 16:53:29 by kirill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char *res;
	size_t len;

	res = NULL;
	if (s)
	{
		while (*s == ' ' || *s == '\t' || *s == '\n')
			s++;
		if (*s)
		{
			len = ft_strlen(s) - 1;
			while (*(s + len) == ' ' || *(s + len) == '\t' || *(s + len) == '\n')
				len--;
			if ((res = (char*)malloc(len + 2)))
			{
				ft_memcpy(res, s, len + 1);
				*(res + len + 1) = '\0';
			}
		}
		else if (!(res = (char*)ft_memalloc(sizeof(char))))
			return (res);
	}
	return (res);
}
