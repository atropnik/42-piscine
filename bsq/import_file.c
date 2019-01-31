/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   import_file.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaddox <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 19:25:05 by smaddox           #+#    #+#             */
/*   Updated: 2019/01/30 15:28:12 by smaddox          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "ft_header.h"

#define BUFF_SIZE 4096

char	*import_file(char *file_name)
{
	int		file;
	char	*buff;

	buff = (char*)malloc(BUFF_SIZE * (sizeof(char)));
	file = open(file_name, O_RDONLY);
	read(file, buff, BUFF_SIZE);
	return(buff);
}
