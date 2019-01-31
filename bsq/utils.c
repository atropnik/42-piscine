/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 17:46:59 by atropnik          #+#    #+#             */
/*   Updated: 2019/01/30 18:23:47 by smaddox          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
int 		get_min(int x, int y)
{
	return (x < y) ? x : y;
}
*/
void	put_error()
{
	write(2, "map error\n", 10);
}

int		ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i])
		++i;
	return (i);
}

int		num_lines(char *str)
{
	int	num;

	num = -1;
	while (*str)
	{
		if (*str == '\n')
			num++;
		str++;
	}
	return (num);
}
