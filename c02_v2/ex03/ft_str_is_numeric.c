/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lizeng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:53:02 by lizeng            #+#    #+#             */
/*   Updated: 2024/08/21 21:28:03 by lizeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*#include <stdio.h>
int main(void)
{
    char    str1[] = "123456";
    char    str2[] = "123abc";
    char    str3[] = "";

    printf("Test 1: %d\n", ft_str_is_numeric(str1));
    printf("Test 2: %d\n", ft_str_is_numeric(str2));
    printf("Test 3: %d\n", ft_str_is_numeric(str3));
    return (0);
}*/
