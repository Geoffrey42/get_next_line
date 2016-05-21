/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/21 10:19:01 by ggane             #+#    #+#             */
/*   Updated: 2016/05/21 10:33:42 by ggane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int		main(int argc, char **argv)
{
	char *line = NULL;
	int	res = 0;
	int fd = open("test", O_RDONLY);

	while ((res = get_next_line(0, &line) >= -1))
	{
		printf("line : %s\n", line);
		printf("res : %s\n", line);
		free(line);
		if (res == -1 || res == 0)
			break ;
	}
	printf("%d\n", res);
	return (0);
}
