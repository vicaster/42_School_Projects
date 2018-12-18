/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   fillit.h                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/11 14:12:51 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/18 15:54:21 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"
# include <stdio.h>


# define Y	xy->y
# define X	xy->x

typedef struct	s_stru
{
	int			x;
	char		a;
	int			max;
	int			next;
}				t_stru;

typedef struct	s_pose
{
	int			x;
	int			y;
}				t_pose;

int				ft_tetri_check_l(char **t, int l);
void			ft_tetri_set0c(char **t, int c);
int				ft_tetri_check_c(char **t, int c);
void			ft_tetri_set0l(char **t, int l);
int				ft_check_tetri(char **tc);
char			**ft_bdd(void);
int				check_buf(char *str);
char			*ft_tetri_clean(char *buff);
int				tetri_cmp(char **bdd, char *str);
void			*ft_memalloc(size_t size);
void			reader(int fd, char **bdd, int *i, t_stru **t);
t_stru			*ft_stock(int x, int i, int max);
void			ft_printtab(char **str);
void			ft_fill(char **t, char *str, t_pose *xy, char c);
char			**ft_initab(int size);
int				ft_cmptmap(char **tab, char *str, t_pose *xy);
void			prefillit(t_stru **t, int i);
int				fillit(char **tab, t_stru **t, int p, char **bdd);
void			ft_clear(char **tab, char *str, t_pose *xy);
int				ft_sqrt(int i);
int				checknl(char *str);
void			ft_error(void);
void			ft_free_tab(void **tab, int size);
#endif
