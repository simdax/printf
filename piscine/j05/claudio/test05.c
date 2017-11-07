/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccabral <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 08:57:33 by ccabral           #+#    #+#             */
/*   Updated: 2017/08/15 18:33:06 by ccabral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <utility.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>

char			*ft_strcpy(char *dest, char *src);
char			*ft_strncpy(char *dest, char *src, int len);
char			*ft_strstr(char *str, char *to_find);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strupcase(char *str);
char			*ft_strlowcase(char *str);
char			*ft_strcapitalize(char *str);
int				ft_str_is_alpha(char *str);
int				ft_str_is_numeric(char *str);
int				ft_str_is_lowercase(char *str);
int				ft_str_is_uppercase(char *str);
int				ft_str_is_printable(char *str);
char			*ft_strcat(char *dest, char *src);
char			*ft_strncat(char *dest, char *src, int nb);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
void			ft_putnbr_base(int nbr, char *base);
int				ft_atoi_base(char *str, char *base);
void			ft_putstr_non_printable(char *str);
void			*ft_print_memory(void *addr, unsigned int size);

void	ft_test_day_05(int from, int to)
{
	while (from <= to)
	{
		ft_putchar('\n');
		if (from == 0)
		{
			ft_putstr("ex00:\n");
		}
		else if (from == 1)
		{
			ft_putstr("ex01:\n");
		}
		else if (from == 2)
		{
			ft_putstr("ex02:\n");
		}
		else if (from == 3)
		{
			ft_putstr("ex03:\n");

			char src[] = "Correct";
			char dest[] = "Incorrect";
			ft_strcpy(dest, src);
			assert_s(dest, "Correct");
		}
		else if (from == 4)
		{
			ft_putstr("ex04:\n");
			char src[100] = "Correct";
			char	src2[] = "";
			char dest[100] = "Incorrect";
			char dest2[100] = "Incorrect";
			int	size	= 15;
			assert_s(ft_strncpy(dest, src, size), strncpy(dest2, src, size));
			assert_s(ft_strncpy(dest, src, size), strncpy(dest2, src, size));
			assert_s(ft_strncpy(dest, src2, size), strncpy(dest2, src2, size));
			assert_s(ft_strncpy(dest, src2, size), strncpy(dest2, src2, size));
		}
		else if (from == 5)
		{
			ft_putstr("ex05:\n");
			char src[] = "ecA ecB ec";
			char find[] = "ect";
			char *substr = ft_strstr(src, find);
			if (substr)
			{
				assert_s(substr, strstr(src, find));
			}
			char find2[] = "banana";
			substr = ft_strstr(src, find2);
			assert_i((int)substr, 0);
			assert_s(ft_strstr(find2, "ana"), strstr(find2, "ana"));
			assert_i((int)ft_strstr(src, "jin"), (int)strstr(src, "jin"));
		}
		else if (from == 6)
		{
			ft_putstr("ex06:\n");
			assert_i(ft_strcmp("1234", "1235"), -1);
			assert_i(ft_strcmp("1234", "1235"), -1);
			assert_i(ft_strcmp("1234", "1233"), 1);
			assert_i(ft_strcmp("\200", "\0"), 1);
		}
		else if (from == 7)
		{
			ft_putstr("ex07:\n");
			assert_i(ft_strncmp("1234", "1235", 3), 0);
			assert_i(ft_strncmp("1234", "1235", 4), -1);
			assert_i(ft_strncmp("1234", "1233", 5), 1);
			assert_i(ft_strncmp("\200", "\0", 6), 1);
		}
		else if (from == 8)
		{
			ft_putstr("ex08:\n");
			char str[] = "ab cd";
			assert_s(ft_strupcase(str), "AB CD");
			char str1[] = "abcd";
			assert_s(ft_strupcase(str1), "ABCD");
			char str2[] = "aBcd";
			assert_s(ft_strupcase(str2), "ABCD");
		}
		else if (from == 9)
		{
			ft_putstr("ex09:\n");
			char str[] = "AB CD";
			assert_s(ft_strlowcase(str), "ab cd");
			char str1[] = "ABCD";
			assert_s(ft_strlowcase(str1), "abcd");
			char str2[] = "AbCD";
			assert_s(ft_strlowcase(str2), "abcd");
		}
		else if (from == 10)
		{
			ft_putstr("ex10:\n");
			char str[] = "42mots -deux; *cinquante+et+un";
			assert_s(ft_strcapitalize(str), "42mots -Deux; *Cinquante+Et+Un");
		}
		else if (from == 11)
		{
			ft_putstr("ex11:\n");
			assert_i(ft_str_is_alpha("abc*sd"), 0);
			assert_i(ft_str_is_alpha("BASDBbasdB"), 1);
			assert_i(ft_str_is_alpha("123"), 0);
			assert_i(ft_str_is_alpha(""), 1);
			assert_i(ft_str_is_alpha("ABCD"), 1);
			assert_i(ft_str_is_alpha("abcdefghijklmnpqrstuvwxyz"), 1);
			assert_i(ft_str_is_alpha("ABCDEFGHIJKLMNPQRSTUVWXYZ"), 1);
		}
		else if (from == 12)
		{
			ft_putstr("ex12:\n");
			char str[] = "ab*cd";
			assert_i(ft_str_is_numeric(str), 0);
			char str1[] = "34756934023895";
			assert_i(ft_str_is_numeric(str1), 1);
			char str2[] = "";
			assert_i(ft_str_is_numeric(str2), 1);
		}
		else if (from == 13)
		{
			ft_putstr("ex13:\n");
			char str[] = "ab*cd";
			assert_i(ft_str_is_lowercase(str), 0);
			char str1[] = "abdasd";
			assert_i(ft_str_is_lowercase(str1), 1);
			char str2[] = "dasD";
			assert_i(ft_str_is_lowercase(str2), 0);
		}
		else if (from == 14)
		{
			ft_putstr("ex14:\n");
			char str[] = "ab*cd";
			assert_i(ft_str_is_uppercase(str), 0);
			char str1[] = "ABDASD";
			assert_i(ft_str_is_uppercase(str1), 1);
			char str2[] = "DASd";
			assert_i(ft_str_is_uppercase(str2), 0);
		}
		else if (from == 15)
		{
			ft_putstr("ex15:\n");
			char str[] = "ab*cd";
			assert_i(ft_str_is_printable(str), 1);
			char str1[] = "ABDASD";
			assert_i(ft_str_is_printable(str1), 1);
			char str2[] = "as\nasd";
			assert_i(ft_str_is_printable(str2), 0);
		}
		else if (from == 16)
		{
			ft_putstr("ex16:\n");
			char src[] = "Correct";
			char dest[100] = "Correct ";
			assert_s(ft_strcat(dest, src), "Correct Correct");
			assert_i(dest[15], 0);
		}
		else if (from == 17)
		{
			ft_putstr("ex17:\n");
			char src[] = "Correct";
			char dest[100] = "Correct ";
			char dest2[100] = "Correct ";
			assert_s(ft_strncat(dest, src, 3), strncat(dest2, src, 3));
			assert_i(dest[11], 0);
			assert_s(ft_strncat(dest, src, 8), strncat(dest2, src, 8));
		}
		else if (from == 18)
		{
			ft_putstr("ex18:\n");

			char src[] = "Car";
			char dest[100] = "Correct_";
			char dest2[100] = "Correct_";
			assert_i(ft_strlcat(dest, src, 9), strlcat(dest2, src, 9));
			assert_s(dest, dest2);
			assert_i(ft_strlcat(dest, src, 5), strlcat(dest2, src, 5));
			assert_s(dest, dest2);
			assert_i(ft_strlcat(dest, src, 100), strlcat(dest2, src, 100));
			assert_s(dest, dest2);
			assert_i(ft_strlcat(dest, src, 100), strlcat(dest2, src, 100));
			assert_s(dest, dest2);
			assert_i(ft_strlcat(dest, src, 13), strlcat(dest2, src, 13));
			assert_s(dest, dest2);
		}
		else if (from == 19)
		{
			ft_putstr("ex19:\n");

			char src[] = "CorrectOW AOISd";
			char dest[100] = "Correct ";
			char dest2[100] = "Correct ";
			assert_i(ft_strlcpy(dest, src, 50), strlcpy(dest2, src, 50));
			assert_s(dest, dest2);
			assert_i(ft_strlcpy(dest, src, 5), strlcpy(dest2, src, 5));
			assert_s(dest, dest2);
			assert_i(ft_strlcpy(dest, src, 9), strlcpy(dest2, src, 9));
			assert_s(dest, dest2);

			char src2[] = "CorrectOW";
			assert_i(ft_strlcpy(dest, src2, 5), strlcpy(dest2, src2, 5));
			assert_s(dest, dest2);
			assert_i(ft_strlcpy(dest, src2, 9), strlcpy(dest2, src2, 9));
			assert_s(dest, dest2);
		}
		else if (from == 20)
		{
			ft_putstr("ex20:\n");
			char base[100] = "0123456789ABCDEF";
			ft_putstr("Next number should be:\n7FFFFFFF\nAnd is:\n");
			ft_putnbr_base(INT_MAX, base);
			ft_putchar('\n');
			ft_putstr("Next number should be:\n-80000000\nAnd is:\n");
			ft_putnbr_base(INT_MIN, base);
			ft_putchar('\n');
			ft_putstr("Next number should be:\n0\nAnd is:\n");
			ft_putnbr_base(0, base);
			ft_putchar('\n');
		}
		else if (from == 21)
		{
			ft_putstr("ex21:\n");
			char base[100] = "0123456789ABCDEF";
			assert_i(ft_atoi_base("+2-A", base), 0x2);
			assert_i(ft_atoi_base("2-A", base), 0x2);
			assert_i(ft_atoi_base("1", base), 0x1);
			assert_i(ft_atoi_base("9", base), 9);
			assert_i(ft_atoi_base("7FFFFFFF", base), 2147483647);
			assert_i(ft_atoi_base("-80000000", base), -2147483648);
		}
		else if (from == 22)
		{
			ft_putstr("ex22:\n");
			ft_putstr("The next line should read: Tes\\0at I love J-pop~\n");
			ft_putstr_non_printable("Tes\nt I love J-pop~");
			ft_putchar('\n');
			ft_putstr("The next line should read: Tes\\09t\n");
			ft_putstr_non_printable("Tes\tt");
			ft_putchar('\n');
			ft_putstr_non_printable("\"000000000");
		}
		else if (from == 23)
		{
			ft_putstr("ex23:\n");
			char *mem = "Testando, 123, testando :)";
			int i = 0;
			while ( i < 1)
			{
				ft_print_memory(mem, 0x5 + i);
				ft_putchar('\n');
				++i;
			}
		}
		++from;
	}
}
