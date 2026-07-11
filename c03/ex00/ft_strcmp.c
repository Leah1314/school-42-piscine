/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lizeng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 19:50:33 by lizeng            #+#    #+#             */
/*   Updated: 2024/08/22 20:16:43 by lizeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	printf("Comparison result: %d\n", ft_strcmp("Hello", "Hello"));
	printf("Comparison result: %d\n", ft_strcmp("Hello", "Hell"));
	printf("Comparison result: %d\n", ft_strcmp("Hell", "Hello"));
	return 0;
}*/
