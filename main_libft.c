/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_libft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kirill <kirill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 16:11:31 by kirill            #+#    #+#             */
/*   Updated: 2018/12/20 02:04:34 by kirill           ###   ########.fr       */
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

//void printBits(size_t const size, void const * const ptr);
//char			f_strmap(char c) { return (c + 7); }

int main(void)
{
	char **res;
	char *in = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
//	char in2[15] = "rrrrrr\0\0\0\0\0a";
//	char *src = "abcdef";
//	char in3[7] = {0};
//	int c;
//	char *test;
//	char *test2;
//	size_t size = 0;
//	size_t n = 0;
//	char *ptr = NULL;
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
//		ptr = strdup("test\200string");
//		printf("libc: %p\n%s\n%p\n", memccpy(in2, ptr, '\200', 7), in2, ft_memccpy(in3, ptr, '\200', 7));
//		printBits (sizeof(in2), in2);
//		printBits (sizeof(in3), in3);
//		scanf("%[^\n]%*c", in2);
//		scanf("%zi", &size);
//		size = strlen(in2);
//		scanf("%s %s", in, in2);
//		printf("libc: %i ; ft_atoi: %i\n", atoi(in), ft_atoi(in));
//		printf("libc: %s; ft_strstr: %s\n", strstr(in, in2), ft_strstr(in, in2));
//		printf("libc: %s; ft_strnstr: %s\n", strnstr(in, in2, size), ft_strnstr(in, in2, size));
//		printf("libc: %d; my_ft: %d", strcmp(in, in2), ft_strcmp(in, in2));
//		printf("libc: %d; my_ft: %d", strncmp(in, in2, n), ft_strncmp(in, in2, n));
//		usleep(10000);

/* memmove */
/*
		printBits (sizeof(src), src);
		memmove (&src[4], &src[3], 3);
		printf ("src new:\n");
		printBits (sizeof(src), src);
		memmove (&in2[3], &in2[4], 3);
		printf ("src new:\n");
		printBits (sizeof(in2), in2);
	//}
*/
/* memchr

//		printf ("%d and %d\n", memcmp(in2, src, size), ft_memcmp(in2, src, size));
		printf ("libc: %p\n", memchr(NULL, '\0', 0x20));
		printf ("my: %p\n", ft_memchr(NULL, '\0', 0x20));
*/
/* strncpy
		printf("String: %s\n", strncpy(in2, src, strlen(src)));
		printBits(sizeof(in2), in2);
*/
/* strncat
		printf("String: %s AND %s\n", strncat(in2, src, 2), ft_strncat(in, src, 2));
		*/
/* strlcat
		printf("String: %lu AND %zu\n", strlcat(in2, src, size), ft_strlcat(in, src, size));
		printf("s1: %s", in2);
		printf("s1: %s", in);
		*/

/*
	char			ctab[11];
	int				itab[11];
	unsigned long	ltab[11];
	size_t			j;
	int				i;

	i = -300;
	memchr(NULL, 0, 0);
	printf("long\n");
	ft_memchr(NULL, 0, 0);
	printf("AHAHAHA\n");
	while (i < 300)
	{
		j = 0;
		while (j < 11)
		{
			ctab[j] = (char)rand();
			itab[j] = rand();
			ltab[j] = (unsigned long)rand() * 10000;
			j++;
		}
					printf("char\n");

		if (memchr(ctab, i, sizeof(ctab)) != ft_memchr(ctab, i, sizeof(ctab)))
		;
					printf("int\n");
		if (memchr(itab, i, sizeof(itab)) != ft_memchr(itab, i, sizeof(itab)))
;
printf("long\n");
		if (memchr(ltab, i, sizeof(ltab)) != ft_memchr(ltab, i, sizeof(ltab)))
			;
		++i;
	}
	*/
/* strmap

			char	*b = "override this !";
			char	b2[0xF0];
			size_t	size = strlen(b);

			for (size_t i = 0; i < size; i++)
				b2[i] = f_strmap(b[i]);
			b2[size] = 0;
			char	*ret = ft_strmap(b, f_strmap);
			if (!strcmp(b2, ret))
				printf("GOOD\n");
*/

/* strtrim
	printf ("s1:%s\n", in);
	printf ("s2:%s\n", ft_strtrim(in));
	*/

/* strclen
	printf("len is:%zu", ft_strclen(in, '*'));
	*/

/* strsplit */
	res = ft_strsplit(in, ' ');
	while (*res)
	{
		printf("string is:%s\npointer is:%p\n", *res, *res);
		res++;
	}
	printf("string is:%s\npointer is:%p\n", *res, *res);
	//free (res);


/* itoa
	test = ft_itoa(c);
	printf("res:%s\n", test);
	free(test);
*/
	return 0;
}
