/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions-1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosyed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:57:47 by hosyed            #+#    #+#             */
/*   Updated: 2024/08/18 17:25:15 by hosyed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);

int		ft_atoi(char *str);
int		ft_strlen(char *str);
int		check_double(int tab[4][4], int pos, int num);
int		check_case(int tab[4][4], int pos, int entry[16]);

int	check(int ac, char **av)
{
	if (ac != 2)
		return (1);
	if (ft_strlen(av[1]) != 31)
		return (1);
	return (0);
}

int	*get_numbers(char *str)
{
	int	i;
	int	j;
	int	*tab;

	i = -1;
	j = 0;
	tab = malloc(sizeof(int) * 16);
	if (!tab)
		return (0);
	while (str[++i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			tab[j++] = ft_atoi(str + i);
		}
	}
	return (tab);
}
