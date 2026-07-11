int ft_recursive_factorial(int nb)
{
    // If the number is less than 0, return 0
    if (nb < 0)
        return 0;

    // Base case: 0! = 1 and 1! = 1
    if (nb == 0 || nb == 1)
        return 1;

    // Recursive case: n! = n * (n - 1)!
    return nb * ft_recursive_factorial(nb - 1);
}

#include <stdio.h>

int ft_recursive_factorial(int nb);

int main(void)
{
    printf("%d\n", ft_recursive_factorial(5));  // Expected Output: 120
    printf("%d\n", ft_recursive_factorial(0));  // Expected Output: 1
    printf("%d\n", ft_recursive_factorial(-5)); // Expected Output: 0
    printf("%d\n", ft_recursive_factorial(1));  // Expected Output: 1
    return 0;
}
