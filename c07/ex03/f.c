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
