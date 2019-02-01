#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while(*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void	search_and_replace(char *og_s, char *f_s, char *r_s)
{
	int i;

	i = 0;
	while (og_s[i] != '\0')
	{
		if (og_s[i] == *f_s)
			ft_putchar(*r_s);
		else
			ft_putchar(og_s[i]);
	i++;
	}
}

int	main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (argc != 4)
		;
	else 
	{
		while (argv[1][i] != *argv[2] && argv[1][i] != '\0')
			i++;
		while (argv[2][j] != '\0')
			j++;
		if (j != 1)
			;
		else
		{
			if (argv[1][i] == '\0')
				ft_putstr(argv[1]);
			else
				search_and_replace(argv[1], argv[2], argv[3]);
		}
	}
	ft_putchar('\n');
	return(0);
}
