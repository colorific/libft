/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kirill <kirill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 17:10:59 by kirill            #+#    #+#             */
/*   Updated: 2018/12/19 02:16:18 by kirill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_freeall(char **ptr, size_t i)
{
	++i;
	while (i-- != 0)
		ft_memdel((void **)&ptr[i]);
}

static void	ft_justdoit(char **ptr, char const *s, char c, size_t tlen)
{
	char *cptr;
	size_t i;

	i = 0;
	while (*s)
	{
		while (*s == c)
		{
			tlen--;
			s++;
		}
		if (!*s)
			break;
		cptr = (char *)ft_memchr(s, c, tlen);

/* -------------- Test module --------------

		ptr[i] = ft_strsub(s, 0, cptr ? (size_t)(cptr - s) : tlen);
		ptr[2] = NULL;
		if (!(ptr[i++]))
		{
			ft_freeall(&(*ptr), --i);
			break;
		}
 -------------- Test module -------------- */


		if (!(ptr[i++] = ft_strsub(s, 0, cptr ? (size_t)(cptr - s) : tlen)))
		{
			ft_freeall(&(*ptr), --i);
			break;
		}

		s += cptr ? (size_t)(cptr - s) : tlen;
		tlen -= cptr - s;
	}
	ptr[i] = NULL;
}

char	**ft_strsplit(char const *s, char c)
{
	size_t tlen;
	size_t words;
	char **ptr;

	ptr = NULL;
	if (s)
	{
		tlen = ft_strparse(s, c, &words);
		if ((ptr = (char**)malloc(sizeof(char*) * words + 1)))
			ft_justdoit(&(*ptr), s, c, tlen);
		if (ptr && !*ptr)
			free(ptr);
	}
	return (ptr ? ptr : NULL);
}
