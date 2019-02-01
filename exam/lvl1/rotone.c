/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 20:06:46 by atropnik          #+#    #+#             */
/*   Updated: 2019/01/31 20:43:36 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rotone(char *str)
{
	int		i;
	int		j;
	char	*lcasedubs;

	i = 0;
	lcasedubs = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			j = str[i] - 65;
			str[i] = lcasedubs[j + 1] - 32;
		}
		else if (str[i] >= 97 && str[i] <= 122)
		{
			j = str[i] - 97;
			str[i] = lcasedubs[j + 1];
		}
		else
			;
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		;
	else
		rotone(argv[1]);
	ft_putchar('\n');
	return (0);
}
