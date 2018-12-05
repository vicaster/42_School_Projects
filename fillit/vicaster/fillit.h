/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   fillit.h                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/02 15:43:36 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/05 18:10:05 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"
# include <stdio.h> //     ATTENTION!!

typedef struct  s_tetri
{
	int			i;
	int			j;
	int			nb_tetri;
	char		***tetri;
	char		**tab;

}				t_tetri;

int					ft_size_opti(t_tetri *stru);
int					ft_check_errors(int fd, char *buff);
char            	**fillit(int size_tab, char ***tetri, t_tetri *stru);
void				ft_print_error(void);
void				ft_stock_buff(char *buff);
void				ft_replace(char *buff, int	i);
char				***ft_fill_tetri(int fd, int i, t_tetri *stru);
char				**ft_init_tab(int size);
char				**ft_fill_map(int x, int y, t_tetri *stru);
int					ft_count_pt(char *buff);
int					ft_count_charp(char *buff);
int					ft_count_unn(char *buff);
int					ft_check_neighbour(char *buff);
int					ft_check_lines(char *buff);
char				**ft_opti_tetri(char **tetri, t_tetri *stru, int x, int y);

#endif
