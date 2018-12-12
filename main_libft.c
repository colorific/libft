/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_libft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kirill <kirill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 16:11:31 by kirill            #+#    #+#             */
/*   Updated: 2018/12/13 02:02:53 by kirill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <locale.h>
#include "libft.h"

void printBits(size_t const size, void const * const ptr);

int main(void)
{
//	char str;
//	char in[50] = "some fun \0 dk hope";
	char in2[7] = {0};
	char in3[7] = {0};
//	int c = 1;
//	char *test;
//	char *test2;
//	size_t size;
//	size_t n = 0;
	char *ptr = NULL;
/*	long int lomax;
	long int lomin;
	unsigned long ulo;

	setlocale(LC_ALL, "RUS");
	printf("Максимальное значение типа int в этой системе составляет %d\n", INT_MAX);
	printf("Максимальное значение бесзнакового типа int в этой системе составляет %u\n", UINT_MAX);
	printf("Максимальное значение типа long в этой системе составляет %ld\n", LONG_MAX);
	printf("Максимальное значение типа long в этой системе составляет %lld\n", LLONG_MAX);
	printf("Максимальное значение типа Ulong в этой системе составляет %lu\n", ULONG_MAX);
	lomax = LONG_MAX;
	lomin = LONG_MIN;
	ulo = -1;
	lomax++;
	lomin--;
	printf("lomax = %ld lomin = %ld\n", lomax, lomin);
	printf("ulo = %lu\n", ulo);
	ulo--;
	printf("ulo = %lu\n", ulo);
*/

/*	printf("libc 0 - 0: %s; ft_strstr: %s\n", strstr(in, in2), ft_strstr(in, in2));
	test = "\0";
	test2 = "123";
	printf("libc 0 - 123: %s; ft_strstr: %s\n", strstr(test, test2), ft_strstr(test, test2));
	test = "123";
	test2 = "123";
	printf("libc 123 - 123: %s; ft_strstr: %s\n", strstr(test, test2), ft_strstr(test, test2));
	test = "123";
	test2 = "\0";
	printf("libc 123 - 0: %s; ft_strstr: %s\n", strstr(test, test2), ft_strstr(test, test2));

	for (lomin = LONG_MAX / 10; lomin < LONG_MAX; lomin++)
	{
		sprintf (in, "%ld",lomin);
		if (atoi(in) != ft_atoi(in))
		{
			printf("ERROR!\n");
			printf("libc: %d ; ft_atoi: %d\n", atoi(in), ft_atoi(in));

		}
		printf("%ld\r", lomin);
	}
*/

//	while (1)
//	{
//		scanf("%c", &str);
//		printf("Check is digit: %d\n", str);
//		printf("libc: %d; ft_isdigit: %d\n", isdigit(str), ft_isdigit(str));
//		printf("Now atoi: ");
//		scanf("%[^\n]%*c", in);
//		scanf("%d", &c);
//		printf("libc: %s; ft_strchr: %s\n", strchr(in, c), ft_strchr(in, c));
//		printf("libc: %p; ft_memcpy: %p\n", memcpy(ptr, in, c), ft_memcpy(ptr, in, c));
		ptr = strdup("test\200string");
		printf("libc: %p\n%s\n%p\n", memccpy(in2, ptr, '\200', 7), in2, ft_memccpy(in3, ptr, '\200', 7));
		printBits (sizeof(in2), in2);
		printBits (sizeof(in3), in3);
//		scanf("%[^\n]%*c", in2);
//		scanf("%zi", &size);
//		size = strlen(in2);
//		scanf("%s %s", in, in2);
//		printf("libc: %i ; ft_atoi: %i\n", atoi(in), ft_atoi(in));
//		printf("libc: %s; ft_strstr: %s\n", strstr(in, in2), ft_strstr(in, in2));
//		printf("libc: %s; ft_strnstr: %s\n", strnstr(in, in2, size), ft_strnstr(in, in2, size));
//		printf("libc: %d; my_ft: %d", strcmp(in, in2), ft_strcmp(in, in2));
//		printf("libc: %d; my_ft: %d", strncmp(in, in2, n), ft_strncmp(in, in2, n));
		usleep(10000);
	//}
}
