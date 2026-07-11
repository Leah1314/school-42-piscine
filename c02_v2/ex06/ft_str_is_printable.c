/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lizeng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:27:24 by lizeng            #+#    #+#             */
/*   Updated: 2024/08/21 18:31:00 by lizeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	char	str1[] = "\0";
	char	str2[] = "Hello";
	char	str3[] = "tt\n";
	printf("Test 1: %d\n", ft_str_is_printable(str1));
	printf("Test 2: %d\n", ft_str_is_printable(str2));
	printf("Test 3: %d\n", ft_str_is_printable(str3));
	return (0);
}