/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 18:04:17 by exam              #+#    #+#             */
/*   Updated: 2019/01/31 03:54:31 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_countdown()
{
	int i;

	i = 58;
	while (--i > 47)
		ft_putchar(i);
}
	
int		main()
{
	ft_countdown();
	ft_putchar('\n');
	return(0);
}
