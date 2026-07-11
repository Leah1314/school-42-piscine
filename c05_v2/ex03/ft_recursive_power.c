/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lizeng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 23:15:54 by lizeng            #+#    #+#             */
/*   Updated: 2024/08/25 23:16:03 by lizeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return 0;
	if (power == 0)
		return 1;
	return nb * ft_recursive_power(nb, power - 1);
}

/*#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	printf("%d\n", ft_recursive_power(2, 3));  // Expected Output: 8
	printf("%d\n", ft_recursive_power(5, 0));  // Expected Output: 1
	printf("%d\n", ft_recursive_power(0, 0));  // Expected Output: 1
	printf("%d\n", ft_recursive_power(2, -3)); // Expected Output: 0
	printf("%d\n", ft_recursive_power(0, 5));  // Expected Output: 0
	return 0;
}*/
