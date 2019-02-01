/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 03:54:19 by atropnik          #+#    #+#             */
/*   Updated: 2019/02/01 04:30:16 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

unsigned char	reverse_bits(unsigned char octet)
{
	return  (((octet >> 0) & 1) << 7) | \
			(((octet >> 1) & 1) << 6) | \
			(((octet >> 2) & 1) << 5) | \
			(((octet >> 3) & 1) << 4) | \
			(((octet >> 4) & 1) << 3) | \
			(((octet >> 5) & 1) << 2) | \
			(((octet >> 6) & 1) << 1) | \
			(((octet >> 7) & 1) << 0);
}
// testing

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

#include <stdio.h>

int		main()
{
	print_bits(14);
	ft_putchar('\n');
	print_bits(reverse_bits(14));
	return (0);
}

