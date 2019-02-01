int	ft_atoi(const char *str)
{
	int sign;
	int total;
	int i;

	sign = 1;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
		{
			sign = -sign;
			i++;
		}
		if (str[i] == '+')
		{
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			total = total * 10 + str[i] - 48;
			i++;
		}
	}
	return (sign * total);
}

// to test

#include <stdio.h>

int	main()
{
	char str[] = "9999";
	printf("%d\n", ft_atoi(str));
	return (0);
}
