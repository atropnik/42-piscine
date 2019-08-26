/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 09:28:32 by exam              #+#    #+#             */
/*   Updated: 2019/06/25 09:33:58 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rev_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	while (--i >= 0)
		ft_putchar(str[i]);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		;
	else
		ft_rev_putstr(argv[1]);
	ft_putchar('\n');
	return (0);
}
