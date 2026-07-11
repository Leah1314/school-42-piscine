#include <stdlib.h>

char *ft_strdup(char *src)
{
    char *dup;
    int i;
    int len;

    // Calculate the length of the source string
    len = 0;
    while (src[len] != '\0')
        len++;

    // Allocate memory for the duplicated string (including the null terminator)
    dup = malloc((len + 1) * sizeof(char));
    if (dup == NULL) // Check if malloc failed
        return NULL;

    // Copy the source string into the allocated memory
    i = 0;
    while (i < len)
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0'; // Add the null terminator

    return dup;
}

#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src);

int main(void)
{
    char *original = "Hello, world!";
    char *duplicate = ft_strdup(original);

    if (duplicate != NULL)
    {
        printf("Original: %s\n", original);
        printf("Duplicate: %s\n", duplicate);
        free(duplicate); // Free the allocated memory
    }
    return 0;
}
