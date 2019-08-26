/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 10:20:41 by exam              #+#    #+#             */
/*   Updated: 2019/06/25 10:40:55 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	epur_str(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
		{
			ft_putchar(str[i]);
			i++;
		}
		j = i;
		while (str[j] == ' ' || str[j] == '\t')
			j++;
		if (str[i] != '\0' && str[j] != '\0')
		{
			ft_putchar(' ');
			i++;
		}
	}
}

int		main(int argc, char **argv)
{
	if ((argc != 2) || (!(argv[1])))
		;
	else
	{
		epur_str(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
