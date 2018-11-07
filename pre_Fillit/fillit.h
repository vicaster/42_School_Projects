/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   fillit.h                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/02 15:43:36 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/07 18:46:49 by vicaster    ###    #+. /#+    ###.fr     */
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
	size_t			air;
	struct s_lst	*next;
}					t_lst;

int					ft_check_errors(int fd, char *buff);
void				fillit(int fd);
void				ft_print_error(void);
void				ft_stock_buff(char *buff);
void				ft_replace(char *buff, int	i);
void				ft_fill_list(int fd);

#endif