/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.h                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/21 15:34:39 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/27 19:27:04 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"
# include <stdio.h>
# define BUFF_SIZE_PRINTF 4096

typedef	struct		s_stru
{
	int				sharp;
	int				zero;
	int				moins;
	int				plus;
	int				esp;
	int				larg;
	int				preci;
	int				size_preci;
	int				ret;
	int				i;
	int				count;
	int				negative;
	char			type;
	char			size;
	char			buff[BUFF_SIZE];
}					t_stru;

int					ft_printf(const char *format, ...);
t_stru				ft_init_stru(t_stru stru);

t_stru				ft_zero(const char *format, t_stru stru);
t_stru				ft_esp(const char *format, t_stru stru);
t_stru				ft_moins(const char *format, t_stru stru);
t_stru				ft_plus(const char *format, t_stru stru);
t_stru				ft_sharp(const char *format, t_stru stru);

t_stru				check_opt(const char *format, t_stru stru);
t_stru				check_preci(const char *format, t_stru stru);
t_stru				check_size(const char *format, t_stru stru);
t_stru				check_type(const char *format, t_stru stru);

t_stru				resolve_printf(t_stru stru, va_list lst);
t_stru				ft_percent(t_stru stru);
t_stru				ft_d_i(t_stru stru, va_list lst);
t_stru				ft_octal(t_stru stru, va_list lst);
t_stru				ft_hexa(t_stru stru, va_list lst);
t_stru				ft_char(t_stru stru, va_list lst);
t_stru				ft_string(t_stru stru, va_list lst);
t_stru				ft_pointer(t_stru stru, va_list lst);
t_stru				ft_longlong(t_stru stru, va_list lst);

t_stru				ft_resolve_zero(t_stru stru, long long nb);
t_stru				ft_resolve_zero_int(t_stru stru, long long nb);
t_stru				ft_resolve_esp(t_stru stru, long long nb);
t_stru				ft_resolve_moins(t_stru stru, long long nb);
t_stru				ft_resolve_plus(t_stru stru, long long nb);
t_stru				ft_resolve_preci(t_stru stru, long long nb);
t_stru				ft_resolve_preci_string(t_stru stru, long long nb);
t_stru				ft_resolve_preci_int(t_stru stru, long long nb);
t_stru				ft_resolve_larg(t_stru stru, long long nb);
t_stru				ft_resolve_sharp(t_stru stru, long long nb);

t_stru				ft_countlarg(t_stru stru, long long nb);
t_stru				ft_countmoins(t_stru stru, long long nb);
t_stru				ft_countzero(t_stru stru, long long nb);
t_stru				ft_countpreci(t_stru stru, long long nb);

void				ft_itoabuff_base(long long n, int base, char *str);
void				ft_itoabuff_base_uli(unsigned long n, int base, char *str);
t_stru				ft_swap_plus(t_stru stru, long long nb);
t_stru				ft_add_begin(t_stru stru, char c);
int					ft_count_zero(char *str);
t_stru				ft_parse_ignore(t_stru stru);
t_stru				ft_buff_null(t_stru stru);
t_stru				ft_add_first(t_stru stru, char c);
t_stru				ft_swap_char(t_stru stru, char a, char b);
t_stru				ft_check_end(t_stru stru);

#endif
