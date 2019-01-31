/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 04:24:09 by atropnik          #+#    #+#             */
/*   Updated: 2019/01/31 03:20:06 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;

	i = -1;
	if (argc == 2)
	{
		while (++i < argc)
		{
			while (*argv[1] != '\0')
			{
				if (*argv[1] == 'a')
				{
					ft_putchar('a');
					argv[1]++;
					break;
				}
				else
					argv[1]++;
			}
		}
	}
	else
		ft_putchar('a');
	ft_putchar('\n');
	return (0);
}
