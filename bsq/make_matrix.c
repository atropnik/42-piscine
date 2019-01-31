/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_matrix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaddox <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 13:09:37 by smaddox           #+#    #+#             */
/*   Updated: 2019/01/30 15:02:25 by smaddox          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"
#include <stdlib.h> /* for testing remove later */

char **create_matrix(char *file)
{
	char *str;
	char **matrix;
	int i;
	int j;

	i = 0;
	j = 0;
	str  = file;
	matrix = malloc((atoi(&file[0])) * (sizeof(char*))); /* change atoi to ft_atoi after testing changes to be made to handle numbers over 10 */
	while (*str++ != '\n')
		;
	while(*str++ != '\n')
	{
		++i;
	}
	++i;
	while (j <  atoi(&file[0])) /* change this atoi also */
	{
		matrix[j] = (char*)malloc(i * (sizeof(char)));
		j++;
	}
	while(*file++ != '\n')
		;	
	i = 0;
	j = 0;
	while (*file != '\0')
	{
		j = 0;
		while (*file != '\n')
		{
			matrix[i][j] = *file;
			j++;
			++file;
		}
		++file;
		++i;
	}
	return (matrix);
}	

	
