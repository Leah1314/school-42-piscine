int ft_sqrt(int nb)
{
    int i;

    // Return 0 for negative numbers
    if (nb < 0)
        return 0;

    // Edge cases for 0 and 1
    if (nb == 0 || nb == 1)
        return nb;

    // Iteratively check for perfect square
    i = 1;
    while (i * i <= nb)
    {
        if (i * i == nb)
            return i;
        i++;
    }

    // If no perfect square is found, return 0
    return 0;
}
/*#include <stdio.h>

int ft_sqrt(int nb);

int main(void)
{
    printf("%d\n", ft_sqrt(4));   // Expected Output: 2
    printf("%d\n", ft_sqrt(9));   // Expected Output: 3
    printf("%d\n", ft_sqrt(16));  // Expected Output: 4
    printf("%d\n", ft_sqrt(17));  // Expected Output: 0 (not a perfect square)
    printf("%d\n", ft_sqrt(-4));  // Expected Output: 0 (negative number)
    printf("%d\n", ft_sqrt(0));   // Expected Output: 0
    printf("%d\n", ft_sqrt(1));   // Expected Output: 1
    return 0;
}*/
