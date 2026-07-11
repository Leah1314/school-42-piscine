//The factorial of a number n is the product of all positive integers less than or equal to n. It is denoted as n!. For example: 5! = 5 * 4 * 3 * 2 * 1 = 120
int ft_iterative_factorial(int nb)
{
    int result = 1;

    // If the input number is less than 0, return 0
    if (nb < 0)
        return 0;

    // Iteratively calculate the factorial
    while (nb > 0)
    {
        result *= nb;
        nb--;
    }

    return result;
}

#include <stdio.h>

int ft_iterative_factorial(int nb);

int main(void)
{
    printf("%d\n", ft_iterative_factorial(5));  // Expected Output: 120
    printf("%d\n", ft_iterative_factorial(0));  // Expected Output: 1
    printf("%d\n", ft_iterative_factorial(-5)); // Expected Output: 0
    printf("%d\n", ft_iterative_factorial(1));  // Expected Output: 1
    return 0;
}
