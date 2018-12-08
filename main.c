/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kirill <kirill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 16:11:31 by kirill            #+#    #+#             */
/*   Updated: 2018/12/08 03:47:11 by kirill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
	char str;
	char in[100] = {0};

	while (1)
	{
		scanf("%c", &str);
		printf("Check is digit: %d\n", str);
		printf("libc: %d; ft_isdigit: %d\n", isdigit(str), ft_isdigit(str));
		printf("Now atoi: ");
		scanf("%[^\n]%*c", in);
        printf("libc: %d ; ft_atoi: %d\n", atoi(in), ft_atoi(in));
		usleep(10000);
	}
}
