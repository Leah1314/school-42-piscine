int ft_strlen(char *str)
{
    int length = 0;

    // Iterate through the string until the null terminator is encountered
    while (str[length] != '\0')
    {
        length++;
    }

    // Return the length of the string
    return length;
}

#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
    char str[] = "Hello, World!";
    int length = ft_strlen(str);

    printf("Length: %d\n", length);  // Output: Length: 13
    return 0;
}
