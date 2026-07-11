/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lizeng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 22:03:14 by lizeng            #+#    #+#             */
/*   Updated: 2024/08/27 22:03:17 by lizeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	size;
	int	i;

	// Check if min is greater than or equal to max
	if (min >= max)
		return NULL;

	// Calculate the size of the range
	size = max - min;

	// Allocate memory for the array
	range = (int *)malloc(size * sizeof(int));
	if (range == NULL) // Check if malloc failed
		return NULL;

	// Fill the array with values from min to max (excluded)
	i = 0;
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}

	return range;
}
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	*range;
	int	i;

	range = ft_range(5, 10);

	if (range != NULL)
	{
		for (i = 0; i < 5; i++)
		{
		printf("%d ", range[i]);
		}
		printf("\n");
		free(range); // Free the allocated memory
	}
	return 0;
}