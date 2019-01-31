/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 00:04:12 by atropnik          #+#    #+#             */
/*   Updated: 2019/01/30 22:04:53 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_header.h"

/*
typedef struct buffer_s {
	char buffer[4096];
	int last_byte;
} buffer_t;

typedef struct square_s {
	int len;
	int x; // top left x
	int y; // top left y
} square_t;
*/

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
		printf("ERROR\n");
	square->x = x_val;
	square->y = y_val;
	square->len = max - 1;
	printf("%d:%d:%d\n", square->len, square->x, square->y);
	return square;
}

char	**fill_square(char **mat, square_t *square)
{
	int i;
	int j;

	i = square->y;
	while (i < (i + square->len))
	{
		j = square->x;
		while(j < (j + square->len))
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
			printf("%c", mat[i][j]);
		}
		printf("\n");
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
		printf("\n");
		square = find_sub_square(mat, N);
		print_mat(fill_square(mat, square));
		printf("%d:%d:%d\n", square->len, square->x, square->y);
		printf("\n");
		i++;
	}
	return (0);
}
