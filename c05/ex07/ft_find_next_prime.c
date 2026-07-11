int ft_is_prime(int nb)
{
    int	i;

    if (nb <= 1)
        return 0;
    if (nb == 2)
        return 1;

    i = 2;
    while (i * i <= nb)
    {
        if (nb % i == 0)
            return 0;

        i++;
    }

    return 1;
}

int ft_find_next_prime(int nb)
{
    // If nb is less than 2, return 2, the smallest prime
    if (nb <= 1)
        return 2;

    // Keep checking subsequent numbers until a prime is found
    while (!ft_is_prime(nb))
    {
        nb++;
    }

    return nb;
}

/*#include <stdio.h>

int ft_find_next_prime(int nb);

int main(void)
{
    printf("%d\n", ft_find_next_prime(2));   // Expected Output: 2
    printf("%d\n", ft_find_next_prime(3));   // Expected Output: 3
    printf("%d\n", ft_find_next_prime(4));   // Expected Output: 5
    printf("%d\n", ft_find_next_prime(17));  // Expected Output: 17
    printf("%d\n", ft_find_next_prime(18));  // Expected Output: 19
    printf("%d\n", ft_find_next_prime(0));   // Expected Output: 2
    printf("%d\n", ft_find_next_prime(-10)); // Expected Output: 2
    return 0;
}*/
