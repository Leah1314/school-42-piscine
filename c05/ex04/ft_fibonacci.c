int ft_fibonacci(int index)
{
    // If the index is negative, return -1
    if (index < 0)
        return -1;

    // Base case: F(0) = 0 and F(1) = 1
    if (index == 0)
        return 0;
    if (index == 1)
        return 1;

    // Recursive case: F(n) = F(n-1) + F(n-2)
    return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
}

/*#include <stdio.h>

int ft_fibonacci(int index);

int main(void)
{
    printf("%d\n", ft_fibonacci(0));  // Expected Output: 0
    printf("%d\n", ft_fibonacci(1));  // Expected Output: 1
    printf("%d\n", ft_fibonacci(2));  // Expected Output: 1
    printf("%d\n", ft_fibonacci(3));  // Expected Output: 2
    printf("%d\n", ft_fibonacci(4));  // Expected Output: 3
    printf("%d\n", ft_fibonacci(5));  // Expected Output: 5
    printf("%d\n", ft_fibonacci(-1)); // Expected Output: -1
    return 0;
}*/
