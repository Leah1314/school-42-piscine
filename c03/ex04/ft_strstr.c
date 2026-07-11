/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lizeng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 21:47:27 by lizeng            #+#    #+#             */
/*   Updated: 2024/08/22 22:01:23 by lizeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (to_find[j] != '\0' && str[i + j] == to_find[j])
				j++;
		}
		if (to_find[j] == '\0')
			return (&str[i]);
	}
	i++;
	return (NULL);
}

/*char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	str[] = "Hello, World!";
	char	to_find[] = "World";
	char	*result = ft_strstr(str, to_find);

	if (result != NULL)
		printf("Found: %s\n", result);
	else
		printf("Not Found\n");
	return (0);
}*/
