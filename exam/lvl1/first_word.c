#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	first_word(char *str)
{
	int i;

	i = 0;
	while (!((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)))
		i++;
	while (str[i] != ' ' && str[i] != '\t')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		;
	else
		first_word(argv[1]);
	ft_putchar('\n');
	return (0);
}
