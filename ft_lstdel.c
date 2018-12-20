/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forange- <forange-@student.fr.42>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 23:54:29 by forange-          #+#    #+#             */
/*   Updated: 2018/12/21 00:18:58 by forange-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *res;
	t_list *next;
	void (*f)(void *, size_t);

	if (alst)
	{
		res = *alst;
		f = &del;
		while (res->next)
		{
			next = res->next;
			ft_lstdelone(&res, f(res->content, res->content_size));
			res->next = NULL;
			free(res);
			res = next;
		}
	}
}
