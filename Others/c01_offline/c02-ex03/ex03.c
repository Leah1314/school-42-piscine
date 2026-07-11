// ft_str_is_numeric.c
int ft_str_is_numeric(char *str)
{
    int i = 0;

    // If the string is empty, return 1
    if (str[i] == '\0')
    {
        return 1;
    }

    // Check each character in the string
    while (str[i] != '\0')
    {
        // If the character is not a digit, return 0
        if (!(str[i] >= '0' && str[i] <= '9'))
        {
            return 0;
        }
        i++;
    }

    // If all characters are digits, return 1
    return 1;
}
#include <stdio.h>

int main()
{
    char str1[] = "123456";
    char str2[] = "123abc";
    char str3[] = "";

    printf("Test 1: %d\n", ft_str_is_numeric(str1)); // Output: 1
    printf("Test 2: %d\n", ft_str_is_numeric(str2)); // Output: 0
    printf("Test 3: %d\n", ft_str_is_numeric(str3)); // Output: 1

    return 0;
}
