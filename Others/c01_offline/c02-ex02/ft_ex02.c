// ft_str_is_alpha.c
int ft_str_is_alpha(char *str)
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
        // If the character is not a letter, return 0
        if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')))
        {
            return 0;
        }
        i++;
    }

    // If all characters are letters, return 1
    return 1;
}
/*#include <stdio.h>

int main()
{
    char str1[] = "HelloWorld";
    char str2[] = "Hello123";
    char str3[] = "";

    printf("Test 1: %d\n", ft_str_is_alpha(str1)); // Output: 1
    printf("Test 2: %d\n", ft_str_is_alpha(str2)); // Output: 0
    printf("Test 3: %d\n", ft_str_is_alpha(str3)); // Output: 1

    return 0;
}*/
