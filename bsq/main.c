/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 00:04:12 by atropnik          #+#    #+#             */
/*   Updated: 2019/01/30 23:23:13 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_header.h"

square_t 	*find_sub_square(char **mat, int mat_size)
{
	int max = 0;
	int x_val;
	int y_val;
	square_t *square;
	int hor[mat_size][mat_size], ver[mat_size][mat_size];
	int i;
	int j;
	int small;

	hor[0][0] = ver[0][0] = (mat[0][0] == '.');
	i = -1;
	while (++i < mat_size)
	{
		j = -1;
		while (++j < mat_size)
		{
			if (mat[i][j] == 'o')
				ver[i][j] = hor[i][j] = 0;
			else
			{
				hor[i][j] = (j == 0) ? 1 : hor[i][j - 1] + 1;
				ver[i][j] = (i == 0) ? 1 : ver[i - 1][j] + 1;
			}
		}
	}
	i = mat_size;
	while (--i >= 1)
	{
		j = mat_size;
		while (--j >= 1)
		{
			small = get_min(hor[i][j], ver[i][j]) + 1;
			while (--small > max)
			{
				if (ver[i][j - small + 1] >= small && hor[i - small + 1][j] >= small)
				{
					max = small;
					y_val = i - max + 1;
					x_val = j - max + 1;
				}
			}
		}
	}
	if (!(square = malloc(sizeof(square_t))))
		put_error();
	square->x = x_val;
	square->y = y_val;
	square->len = max - 1;
	return square;
}

char	**fill_square(char **mat, square_t *square)
{
	int i;
	int j;
	int stop;
	int stop2;

	i = square->y;
	stop = i + square->len;
	while (i < stop)
	{
		j = square->x;
		stop2 = j + square->len;
		while(j < stop2)
		{
			mat[i][j] = 'x';
			j++;
		}
		i++;
	}
	return (mat);
}

void print_mat(char **mat)
{
	int i;
	int j;

	i = -1;
	while(++i < N)
	{
		j = -1;
		while(++j < N) {
			ft_putchar("%c", mat[i][j]);
		}
		ft_putchar("\n");
	}
}

int main(int argc, char **argv)
{
    char **mat;
	char *file;
	int i;
	square_t *square;

	i = 1;
	while (i < argc)
	{
		file = import_file(argv[i]);
		mat = create_matrix(file);
		print_mat(mat);
		square = find_sub_square(mat, N);
		print_mat(fill_square(mat, square));
		ft_putchar("\n");
		i++;
	}
	return (0);
}
