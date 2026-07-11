/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lizeng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 23:26:49 by lizeng            #+#    #+#             */
/*   Updated: 2024/08/11 22:12:51 by lizeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putint(int n)
{
	char	c;

	c = n + '0';
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	t;

	t = 0;
	while (t <= 9)
	{
		ft_putint(t);
		t++;
	}
}

/*int	main()
{
	ft_print_numbers();
	return (0);
}*/
