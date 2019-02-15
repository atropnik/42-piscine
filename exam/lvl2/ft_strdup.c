/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 03:29:39 by atropnik          #+#    #+#             */
/*   Updated: 2019/02/15 01:45:37 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char 	*ft_strdup(char *s1)
{
	char	*new_str;
	int		i;

	i = 0;
	while (s1[i] != '\0')
		++i;
	if (!(new_str = (char *)malloc(sizeof(char) * i + 1)))
		return (NULL);
	new_str[i] = '\0';
	while (i >= 0)
	{
		new_str[i] = s1[i];
		i--;
	}
	return(new_str);
}
// testing

#include <stdio.h>

int		main()
{
	printf("%s", ft_strdup("hello"));
	return (0);
}
