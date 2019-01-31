int 	ft_strlen(char *str)
{
	int len;
	len = 0;

	while(str[len])
		len++;
	return (len);
}

// for testing int returns use main below

#include <stdio.h>

int	main()
{
	printf("%d\n", ft_strlen("hello"));
	return (0);
}	
