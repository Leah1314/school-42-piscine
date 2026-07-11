/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lizeng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 21:35:58 by lizeng            #+#    #+#             */
/*   Updated: 2024/08/20 21:36:34 by lizeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			return (1);
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	char	str1[] = "hello";
	char	str2[] = "Hello";
	char	str3[] = "";
	printf("Test 1: %d\n", ft_str_is_uppercase(str1));
	printf("Test 2: %d\n", ft_str_is_uppercase(str2));
	printf("Test 3: %d\n", ft_str_is_uppercase(str3));
	return (0);
}*/
