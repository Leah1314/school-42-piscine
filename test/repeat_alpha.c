#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	repeat_alpha(char *str)
{
	int	i;
	int	count;

	i = 0;
	while (str[i] != 0)
	{
		count = 1;
		if (str[i] >= 'a' && str[i] <= 'z')
				count = str[i] - 'a' + 1;
		else if (str[i] >= 'A' && str[i] <= 'Z')
				count = str[i] - 'A' + 1;
		while (count >= 1)
		{
			ft_putchar(str[i]);
			count--;
		}
		i++;
	}
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        repeat_alpha(argv[1]);
    }
    ft_putchar('\n');
    return (0);
}
