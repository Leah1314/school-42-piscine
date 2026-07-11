int ft_is_prime(int nb)
{
    int i;

    // Handle numbers less than or equal to 1
    if (nb <= 1)
        return 0;

    // 2 is a prime number
    if (nb == 2)
        return 1;

    // Check divisibility from 2 to the square root of nb
    i = 2;
    while (i * i <= nb)
    {
        if (nb % i == 0)
            return 0; // Not prime
        i++;
    }

    // If no divisors are found, it is prime
    return 1;
}
#include <stdio.h>

int ft_is_prime(int nb);

int main(void)
{
    printf("%d\n", ft_is_prime(2));   // Expected Output: 1 (prime)
    printf("%d\n", ft_is_prime(3));   // Expected Output: 1 (prime)
    printf("%d\n", ft_is_prime(4));   // Expected Output: 0 (not prime)
    printf("%d\n", ft_is_prime(17));  // Expected Output: 1 (prime)
    printf("%d\n", ft_is_prime(18));  // Expected Output: 0 (not prime)
    printf("%d\n", ft_is_prime(1));   // Expected Output: 0 (not prime)
    printf("%d\n", ft_is_prime(0));   // Expected Output: 0 (not prime)
    return 0;
}
