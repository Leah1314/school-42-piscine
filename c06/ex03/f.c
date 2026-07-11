#include <unistd.h>

// Function to compare two strings lexicographically
int ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}

// Function to swap two pointers
void ft_swap(char **a, char **b)
{
    char *temp = *a;
    *a = *b;
    *b = temp;
}

int main(int argc, char *argv[])
{
    int i;
    int j;

    // Sort the arguments using a bubble sort algorithm
    for (i = 1; i < argc - 1; i++)
    {
        for (j = 1; j < argc - i; j++)
        {
            if (ft_strcmp(argv[j], argv[j + 1]) > 0)
            {
                ft_swap(&argv[j], &argv[j + 1]);
            }
        }
    }

    // Print the sorted arguments
    for (i = 1; i < argc; i++)
    {
        int k = 0;
        while (argv[i][k] != '\0')
        {
            write(1, &argv[i][k], 1);
            k++;
        }
        write(1, "\n", 1); // Print a newline after each argument
    }

    return 0;
}
