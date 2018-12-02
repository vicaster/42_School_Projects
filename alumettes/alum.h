/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   alum.h                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vic <vic@student.le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/02 18:30:45 by vic          #+#   ##    ##    #+#       */
/*   Updated: 2018/12/02 18:32:10 by vic         ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef ALUM_H
# define ALUM_H

# include "libft/libft.h"
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>
# include <string.h>

# define NUM_ROW 7

void	ft_error(void);
int		*ft_get_file(const char *file, int max);
int		*ft_get_standart(void);
void	ft_game(int *tab, int tab_max);
int		ft_verif_number(char *num);

#endif
