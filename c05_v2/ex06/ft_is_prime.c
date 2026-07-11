/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lizeng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 23:19:25 by lizeng            #+#    #+#             */
/*   Updated: 2024/08/25 23:19:28 by lizeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return 0;
	if (nb == 2)
		return 1;
	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return 0;
		i++;
	}
	return 1;
}

#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	printf("%d\n", ft_is_prime(2));   // Expected Output: 1 (prime)
	printf("%d\n", ft_is_prime(3));   // Expected Output: 1 (prime)
	printf("%d\n", ft_is_prime(4));   // Expected Output: 0 (not prime)
	printf("%d\n", ft_is_prime(17));  // Expected Output: 1 (prime)
	printf("%d\n", ft_is_prime(18));  // Expected Output: 0 (not prime)
	printf("%d\n", ft_is_prime(1));   // Expected Output: 0 (not prime)
	printf("%d\n", ft_is_prime(0));   // Expected Output: 0 (not prime)
	return 0;
}