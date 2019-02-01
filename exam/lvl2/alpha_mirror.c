/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 02:06:18 by atropnik          #+#    #+#             */
/*   Updated: 2019/02/01 02:18:33 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	alpha_mirror(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = 'z' - str[i] + 'a';
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = 'Z' - str[i] + 'A';
		}
	ft_putchar(str[i]);
	i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		;
	else
		alpha_mirror(argv[1]);
	ft_putchar('\n');
	return (0);
}
