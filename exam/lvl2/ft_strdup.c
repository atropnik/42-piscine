/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 03:29:39 by atropnik          #+#    #+#             */
/*   Updated: 2019/02/01 03:47:53 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*new_str;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	new_str = (char *)malloc(sizeof(char) * i + 1);
	i = 0;
	while (src[i] != '\0')
	{
		new_str[i] = src[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

// testing

#include <stdio.h>

int		main()
{
	printf("%s", ft_strdup("hello"));
	return (0);
}
