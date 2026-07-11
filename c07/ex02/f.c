#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int *arr;
    int size;
    int i;

    // If min is greater than or equal to max, return 0 and set *range to NULL
    if (min >= max)
    {
        *range = NULL;
        return 0;
    }

    // Calculate the size of the range
    size = max - min;

    // Allocate memory for the array
    arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL) // Check if malloc failed
        return -1;

    // Populate the array with values from min to max (excluded)
    i = 0;
    while (i < size)
    {
        arr[i] = min + i;
        i++;
    }

    // Set the *range to point to the allocated array
    *range = arr;

    // Return the size of the range
    return size;
}
#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max);

int main(void)
{
    int *range;
    int size;
    int i;

    size = ft_ultimate_range(&range, 5, 10);

    if (size >= 0 && range != NULL)
    {
        printf("Size: %d\n", size);
        for (i = 0; i < size; i++)
        {
            printf("%d ", range[i]);
        }
        printf("\n");
        free(range); // Free the allocated memory
    }
    else if (size == 0)
    {
        printf("Range is NULL, size is 0\n");
    }
    else
    {
        printf("Error: memory allocation failed\n");
    }

    return 0;
}
