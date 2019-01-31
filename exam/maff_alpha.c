/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 18:08:03 by exam              #+#    #+#             */
/*   Updated: 2019/01/31 04:19:10 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	maff_alpha(void)
{
	int i;
	int lcase[13];
	int upcase[13];

	i = 0;
	lcase[0] = 'a';
	upcase[0] = 'B';
	while (upcase[0] != '\\')
	{
		if (i == 0)
		{
			ft_putchar(lcase[0]);
			lcase[0] += 2;
			i++;
		}
		if (i > 0)
		{
			ft_putchar(upcase[0]);
			upcase[0] += 2;
			i--;
		}
	}
	ft_putchar('\n');
}

int		main()
{
	maff_alpha();
	return(0);
}
