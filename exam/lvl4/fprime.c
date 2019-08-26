/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 10:51:41 by exam              #+#    #+#             */
/*   Updated: 2019/06/25 12:01:24 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	fprime(int num)
{
	int i;

	i = num - 1;
	while (num % i != 0)
		i--;
	if (i == 1)
	{
		printf("%d", num);
		return ;
	}
	else
	{
		printf("%d*", (num / i));
		fprime(i);
	}
}

int		main(int argc, char **argv)
{
	if (argc != 2 || argv[1][0] == '\0')
		;
	else
	{
		int num;

		num = atoi(argv[1]);
		if (num > 1)
			fprime(atoi(argv[1]));
		else
			printf("%d", num);
	}
	printf("%c", '\n');
	return (0);
}
