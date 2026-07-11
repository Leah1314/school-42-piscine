int ft_strlen(char *str)
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

// Function to check if the base is valid
int is_valid_base(char *base)
{
    int i, j;

    if (ft_strlen(base) < 2)
        return 0;

    for (i = 0; base[i] != '\0'; i++)
    {
        // Check for invalid characters (+, -, whitespace)
        if (base[i] == '+' || base[i] == '-' || base[i] == ' ' ||
            base[i] == '\t' || base[i] == '\n' || base[i] == '\v' ||
            base[i] == '\f' || base[i] == '\r')
            return 0;

        // Check for duplicate characters in the base
        for (j = i + 1; base[j] != '\0'; j++)
        {
            if (base[i] == base[j])
                return 0;
        }
    }
    return 1;
}

// Function to find the index of a character in the base
int get_base_index(char c, char *base)
{
    int i = 0;
    while (base[i] != '\0')
    {
        if (c == base[i])
            return i;
        i++;
    }
    return -1; // If character not found in base
}

int ft_atoi_base(char *str, char *base)
{
    int i = 0;
    int sign = 1;
    int result = 0;
    int base_len;

    // Check if the base is valid
    if (!is_valid_base(base))
        return 0;

    base_len = ft_strlen(base);

    // Skip leading whitespace
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
           str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
    {
        i++;
    }

    // Handle sign characters
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }

    // Convert the string to an integer based on the base
    while (str[i] != '\0')
    {
        int base_index = get_base_index(str[i], base);
        if (base_index == -1)  // If the character is not part of the base, stop
            break;
        result = result * base_len + base_index;
        i++;
    }

    // Return the final result with the correct sign
    return result * sign;
}

#include <stdio.h>

int ft_atoi_base(char *str, char *base);

int main(void)
{
    printf("%d\n", ft_atoi_base("   ---+--+1234ab567", "0123456789"));  // Expected Output: -1234
    printf("%d\n", ft_atoi_base("101010", "01"));                      // Expected Output: 42 (binary)
    printf("%d\n", ft_atoi_base("2A", "0123456789ABCDEF"));            // Expected Output: 42 (hexadecimal)
    printf("%d\n", ft_atoi_base("ifv", "poneyvif"));                   // Expected Output: 123456 (custom base)
    return 0;
}*/


