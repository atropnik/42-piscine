/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 18:55:38 by exam              #+#    #+#             */
/*   Updated: 2019/01/31 04:21:35 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}

void	maff_alpha(void)
{
	int i;
	int caps[26];
	int lcase[26];

	caps[0] = 'Y';
	lcase[0] = 'z';
	i = 1;
	while (caps[0] != '?')
	{
		if (i > 0)
		{
			ft_putchar(lcase[0]);
			lcase[0] = lcase[0] - 2;
			i--;
		}
		else
		{
			ft_putchar(caps[0]);
			caps[0] = caps[0] - 2;
			i++;
		}
	}
}

int		main()
{
	maff_alpha();
	ft_putchar('\n');
	return(0);
}

