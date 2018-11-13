/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   fillit.h                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/02 15:43:36 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/13 15:08:45 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct		s_lst
{
	void			*data;
	struct s_lst	*next;
	struct s_lst	*prev;
}					t_lst;

int					ft_check_errors(int fd, char *buff);
void				fillit(int fd, int size_tab);
void				ft_print_error(void);
void				ft_stock_buff(char *buff);
void				ft_replace(char *buff, int	i);
t_lst				*ft_fill_list(int fd, int i);
char				**ft_init_tab(int size);
int					ft_fill_map(char **tab, t_lst *list);

#endif