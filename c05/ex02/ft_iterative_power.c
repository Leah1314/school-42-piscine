int ft_iterative_power(int nb, int power)
{
    int result = 1;

    // If power is less than 0, return 0
    if (power < 0)
        return 0;

    // Edge case: 0^0 is defined to be 1
    if (nb == 0 && power == 0)
        return 1;

    // Iteratively calculate the power
    while (power > 0)
    {
        result *= nb;
        power--;
    }

    return result;
}
/*#include <stdio.h>

int ft_iterative_power(int nb, int power);

int main(void)
{
    printf("%d\n", ft_iterative_power(2, 3));  // Expected Output: 8
    printf("%d\n", ft_iterative_power(5, 0));  // Expected Output: 1
    printf("%d\n", ft_iterative_power(0, 0));  // Expected Output: 1
    printf("%d\n", ft_iterative_power(2, -3)); // Expected Output: 0
    printf("%d\n", ft_iterative_power(0, 5));  // Expected Output: 0
    return 0;
}*/
