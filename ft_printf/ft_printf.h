/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.h                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/21 15:34:39 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/13 18:39:03 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"
# include <stdio.h>

typedef	struct		s_stru
{
	int				sharp;
	int				zero;
	int				moins;
	int				plus;
	int				esp;
	int				larg;
	char			size;
	int				preci;
	int				size_preci;
	char			type;

	int				ret;
	int				i;
	int				count;
	char			buff[BUFF_SIZE];
}					t_stru;

int					ft_printf(const char *restrict format, ...);
t_stru				ft_init_stru(t_stru stru);

t_stru				ft_zero(const char *restrict format, t_stru stru);
t_stru				ft_esp(const char *restrict format, t_stru stru);
t_stru				ft_moins(const char *restrict format, t_stru stru);
t_stru				ft_plus(const char *restrict format, t_stru stru);
t_stru				ft_sharp(const char *restrict format, t_stru stru);

t_stru				check_opt(const char *restrict format, t_stru stru);
t_stru				check_preci(const char *restrict format, t_stru stru);
t_stru				check_size(const char *restrict format, t_stru stru);
t_stru				check_type(const char *restrict format, t_stru stru);

t_stru				resolve_printf(t_stru stru, va_list lst);
t_stru				ft_percent(t_stru stru, va_list lst);
t_stru				ft_d_i(t_stru stru, va_list lst);
t_stru				ft_octal(t_stru stru, va_list lst);
t_stru				ft_hexa(t_stru stru, va_list lst);
t_stru				ft_char(t_stru stru, va_list lst);
t_stru				ft_string(t_stru stru, va_list lst);
t_stru				ft_longlong(t_stru stru, va_list lst);

t_stru				ft_resolve_zero(t_stru stru, int nb);
t_stru				ft_resolve_esp(t_stru stru, int nb);
t_stru				ft_resolve_moins(t_stru stru, int nb);
t_stru				ft_resolve_plus(t_stru stru, int nb);
t_stru				ft_resolve_preci(t_stru stru, int nb);
t_stru				ft_resolve_larg(t_stru stru, int nb);
t_stru				ft_resolve_sharp(t_stru stru, int nb);

t_stru				ft_countlarg(t_stru stru, long long nb);
t_stru				ft_countmoins(t_stru stru, long long nb);
t_stru				ft_countzero(t_stru stru, long long nb);
t_stru				ft_countpreci(t_stru stru, long long nb);

void				ft_itoabuff_base(long long n, int base, char *str);
t_stru				ft_swap_plus(t_stru stru, int nb);
t_stru				ft_swap_esp(t_stru stru, int nb);
t_stru				ft_add_begin(t_stru stru, char c);
int					ft_count_zero(char *str);
t_stru				ft_parse_ignore(t_stru stru);
t_stru				ft_buff_null(t_stru stru);

#endif
