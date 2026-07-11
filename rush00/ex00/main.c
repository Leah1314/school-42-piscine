/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumahmed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 15:28:40 by sumahmed          #+#    #+#             */
/*   Updated: 2024/08/11 14:40:02 by skirwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <limits.h>

void	rush(int x, int y);
void	err_msg(void);

int	custom_atoi(const char *str)
{
	long long	sign;
	long long	nb;

	nb = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\r' || *str == '\f' || *str == '\v')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10 + (*str - '0');
		if ((nb > 2147483647 && sign == 1) || (nb > 2147483648 && sign == -1))
			return (0);
		str++;
	}
	return ((int)(nb * sign));
}

int	main(int argc, char *argv[])
{
	int	width;
	int	height;

	if (argc != 3)
	{
		err_msg();
		return (1);
	}
	width = custom_atoi(argv[1]);
	height = custom_atoi(argv[2]);
	if (width < 1 || width > 2147483647 || height < 1 || height > 2147483647)
	{
		err_msg();
		return (1);
	}
	rush(width, height);
	return (0);
}
