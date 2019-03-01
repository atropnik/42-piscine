/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 01:35:28 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/01 02:40:09 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	char 	sign;
	int		total;

	total = 0;
	sign = 1;
	while (*str != '\0')
	{
		if (*str == '-')
			sign = -sign;
		if (*str >= '0' && *str <= '9')
			total = total * 10 + (*str - 48);
		str++;
	}
	return (sign * total);
}

// to test

#include <stdio.h>

int	main()
{
	char str[] = "    \n\n\v\f\r\t -5234AAAgreghrsth";
	printf("%d\n", ft_atoi(str));
	return (0);
}
