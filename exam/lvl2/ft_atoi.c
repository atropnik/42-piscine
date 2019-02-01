/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 01:35:28 by atropnik          #+#    #+#             */
/*   Updated: 2019/02/01 01:51:09 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int sign;
	int total;
	int i;

	i = 0;
	sign = 1;
	total = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == '+')
			;
		if (str[i] == '-')
			sign = -1 * sign;
		if (str[i] >= 48 && str[i] <= 57)
			total = total * 10 + (str[i] - 48);
		i++;
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
