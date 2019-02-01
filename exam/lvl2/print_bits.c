/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 03:26:04 by atropnik          #+#    #+#             */
/*   Updated: 2019/02/01 03:53:23 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_bits(unsigned char octet)
{
	char 	oct;
	int		z;

	z = 128;
	oct = octet;
	while (z > 0)
	{
		if (oct & z)
			ft_putchar('1');
		else
			ft_putchar('0');
		z = z >> 1;
	}
}

// testing

int		main()
{
	print_bits(14);
	return (0);
}
