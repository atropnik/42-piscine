/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 02:25:19 by atropnik          #+#    #+#             */
/*   Updated: 2019/02/01 03:05:19 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	    is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	else 
		return (((n & (-n)) == n) ? 1 : 0);
}

// testing

#include <stdio.h>

int		main()
{
	printf("%d\n", is_power_of_2(0));
	printf("%d\n", is_power_of_2(1));
	printf("%d\n", is_power_of_2(2));
	printf("%d\n", is_power_of_2(8));
	return (0);
}
