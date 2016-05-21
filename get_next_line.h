/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/02 18:45:29 by ggane             #+#    #+#             */
/*   Updated: 2016/05/20 14:41:28 by ggane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft/libft.h"
# define BUFF_SIZE 1000

typedef struct	s_cell
{
	char		*stock;
	int			prev_fd;
}				t_cell;

int				get_next_line(const int fd, char **line);

#endif
