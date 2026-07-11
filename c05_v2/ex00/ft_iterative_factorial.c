/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lizeng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 19:28:21 by lizeng            #+#    #+#             */
/*   Updated: 2024/08/25 19:28:27 by lizeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	value;

	value = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		value *= nb;
		nb--;
	}
	return (value);
} 

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_iterative_factorial(0));
	return (0);
}