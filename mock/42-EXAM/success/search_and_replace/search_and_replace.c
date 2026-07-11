#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	search_and_replace(char *s1, char *s2, char *s3)
{
	int	i;

	// Ensure s2 and s3 each contain exactly one character
	if ((!s2[0]) || (!s3[0]) || s2[1] || s3[1])
	{
		write(1, "\n", 1);
		return;
	}

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == s2[0])
			ft_putchar(s3[0]);
		else
			ft_putchar(s1[i]);
		i++;
	}

	// Always end with a newline
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		write(1, "\n", 1);
		return (1);
	}
	search_and_replace(av[1], av[2], av[3]);
	return (0);
}