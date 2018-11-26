/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   fillit.h                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/02 15:43:36 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/26 15:40:48 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

int					ft_check_errors(int fd, char *buff);
char            	**fillit(int fd, int size_tab);
void				ft_print_error(void);
void				ft_stock_buff(char *buff);
void				ft_replace(char *buff, int	i);
char				***ft_fill_tetri(int fd, int i);
char				**ft_init_tab(int size);
char				**ft_fill_map(char **tab, char ***tetri);
int					ft_count_pt(char *buff);
int					ft_count_charp(char *buff);
int					ft_count_unn(char *buff);
int					ft_check_neighbour(char *buff);
int					ft_check_lines(char *buff);

#endif
