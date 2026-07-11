int ft_atoi(char *str)
{
    int i = 0;
    int sign = 1;
    int result = 0;

    // Skip leading whitespace
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
           str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
    {
        i++;
    }

    // Handle sign characters (+ or -)
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }

    // Convert the digits to an integer
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    // Apply the sign to the result
    return result * sign;
}

/*#include <stdio.h>

int ft_atoi(char *str);

int main(void)
{
    printf("%d\n", ft_atoi(" ---+--+1234ab567"));  // Output: -1234
    printf("%d\n", ft_atoi("   +456"));            // Output: 456
    printf("%d\n", ft_atoi("   -42xyz"));          // Output: -42
    printf("%d\n", ft_atoi("  2147483647abc"));    // Output: 2147483647
    printf("%d\n", ft_atoi("   +--10"));           // Output: 0
    return 0;
}*/
