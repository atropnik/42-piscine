#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	repeat_alpha(char *str)
{
	int i;
	int that_many;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			that_many = str[i] - 64;
			while (--that_many >= 0)
				ft_putchar(str[i]);
		}
		else if (str[i] >= 97 && str[i] <= 122)
		{
			that_many = str[i] - 96;
			while (--that_many >= 0)
				ft_putchar(str[i]);
		}
		else
			ft_putchar(str[i]);	
	i++;
	}
}

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
		;
	else
		repeat_alpha(argv[1]);
	ft_putchar('\n');
	return (0);
}
