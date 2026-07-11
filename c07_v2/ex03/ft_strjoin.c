/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lizeng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 22:14:44 by lizeng            #+#    #+#             */
/*   Updated: 2024/08/27 22:14:47 by lizeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(int size, char **strs, char *sep);

int main(void)
{
    char *strs[] = {"Hello", "world", "this", "is", "C"};
    char *sep = " ";
    char *result = ft_strjoin(5, strs, sep);

    if (result != NULL)
    {
        printf("%s\n", result);  // Expected Output: "Hello world this is C"
        free(result); // Free the allocated memory
    }
    return 0;
}
