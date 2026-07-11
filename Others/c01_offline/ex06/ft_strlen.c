// ft_strlen.c
int ft_strlen(char *str)
{
    int length = 0;

    while (str[length] != '\0')  // Iterate through the string until the null terminator
    {
        length++;  // Increment the counter for each character
    }

    return length;  // Return the length of the string
}
/*#include <stdio.h>

int main()
{
    char str[] = "Hello, World!";
    int len = ft_strlen(str);

    printf("The length of the string is: %d\n", len);  // Output will be 13
    return 0;
}*/
