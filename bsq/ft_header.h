/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaddox <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 20:52:46 by smaddox           #+#    #+#             */
/*   Updated: 2019/01/30 21:10:41 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FT_HEADER
#define		FT_HEADER

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1024

// Size of given matrix is N X N
#define N 30

typedef struct square_s 
{
    int len;
    int x; // top left x
    int y; // top left y
} square_t;

typedef struct buffer_s 
{ 
	char buffer[BUF_SIZE]; 
	int last_byte; 
} buffer_t;

/* algorithm funcs */
buffer_t 	*init_buffer(void);
square_t 	*find_sub_square(char **mat, int mat_size);
void 		print_mat(char **mat);

/*file operations*/
char	*import_file(char *file);

/*make matrix*/
char **create_matrix(char *file);

#endif
