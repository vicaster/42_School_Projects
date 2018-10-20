/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/18 13:59:54 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/18 18:57:30 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"

int     get_next_line(const int fd, char **line)
{
    char    tmp[BUFF_SIZE + 1];

    if (fd == -1 || line == NULL)
        return (-1);
    while (read(fd, tmp, BUFF_SIZE) != 0)
    {
        
    }
}
