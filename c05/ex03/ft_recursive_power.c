int ft_recursive_power(int nb, int power)
{
    // If power is less than 0, return 0
    if (power < 0)
        return 0;

    // Base case: if power is 0, return 1
    if (power == 0)
        return 1;

    // Recursive case: nb * (nb raised to power - 1)
    return nb * ft_recursive_power(nb, power - 1);
}
/*#include <stdio.h>

int ft_recursive_power(int nb, int power);

int main(void)
{
    printf("%d\n", ft_recursive_power(2, 3));  // Expected Output: 8
    printf("%d\n", ft_recursive_power(5, 0));  // Expected Output: 1
    printf("%d\n", ft_recursive_power(0, 0));  // Expected Output: 1
    printf("%d\n", ft_recursive_power(2, -3)); // Expected Output: 0
    printf("%d\n", ft_recursive_power(0, 5));  // Expected Output: 0
    return 0;
}*/
