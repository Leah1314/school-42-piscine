/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lizeng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 17:26:49 by lizeng            #+#    #+#             */
/*   Updated: 2024/08/20 19:02:29 by lizeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char	str1[] = "hello";
	char	str2[] = "Hello";
	char	str3[] = "";
	printf("Test 1: %d\n", ft_str_is_lowercase(str1));
	printf("Test 2: %d\n", ft_str_is_lowercase(str2));
	printf("Test 3: %d\n", ft_str_is_lowercase(str3));
	return (0);
}*/
