/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lizeng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 03:20:42 by lizeng            #+#    #+#             */
/*   Updated: 2024/08/20 21:27:32 by lizeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*#include <stdio.h>

int main()
{
    char str1[] = "HelloWorld";
    char str2[] = "Hello123";
    char str3[] = "";

    printf("Test 1: %d\n", ft_str_is_alpha(str1)); // Output: 1
    printf("Test 2: %d\n", ft_str_is_alpha(str2)); // Output: 0
    printf("Test 3: %d\n", ft_str_is_alpha(str3)); // Output: 1

    return 0;
}*/
