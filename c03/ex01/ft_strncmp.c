/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lizeng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 19:53:53 by lizeng            #+#    #+#             */
/*   Updated: 2024/08/22 20:11:54 by lizeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
    printf("Comparison result: %d\n", ft_strncmp("Hello", "Hellz", 4));
    printf("Comparison result: %d\n", ft_strncmp("Hello", "Hellz", 5));
    printf("Comparison result: %d\n", ft_strncmp("Hellz", "Hello", 5));
    printf("Comparison result: %d\n", ft_strncmp("Hello", "HelloWorld", 10));
    return 0;
}*/
