/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 19:21:40 by exam              #+#    #+#             */
/*   Updated: 2019/02/01 02:24:15 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void 	wd_match(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (s2[j] != '\0')
	{
		if (s1[i] != s2[j])
		{
			j++;
		}
		if (s1[i] == s2[j])
		{
			i++;
			j++;
		}
		if (s1[i] == '\0')
		{
			ft_putstr(s1);
			return;
		}
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 3 && i == 0)
	{
		wd_match(argv[1], argv[2]);
		i++;
	}
	ft_putchar('\n');
	return(0);
}
