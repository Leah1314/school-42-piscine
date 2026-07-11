/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lizeng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 23:18:23 by lizeng            #+#    #+#             */
/*   Updated: 2024/08/25 23:18:32 by lizeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
	
	if (index < 0)
		return -1;
	if (index == 0)
		return 0;
	if (index == 1)
		return 1;
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	printf("%d\n", ft_fibonacci(0));  // Expected Output: 0
	printf("%d\n", ft_fibonacci(1));  // Expected Output: 1
	printf("%d\n", ft_fibonacci(2));  // Expected Output: 1
	printf("%d\n", ft_fibonacci(3));  // Expected Output: 2
	printf("%d\n", ft_fibonacci(4));  // Expected Output: 3
	printf("%d\n", ft_fibonacci(5));  // Expected Output: 5
	printf("%d\n", ft_fibonacci(-1)); // Expected Output: -1
	return 0;
}*/