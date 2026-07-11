// ft_putstr.c
#include <unistd.h>

void ft_putstr(char *str)
{
    int i = 0;

    while (str[i] != '\0')  // Iterate until the end of the string
    {
        write(1, &str[i], 1);  // Write each character to the standard output
        i++;
    }
}
/*#include <stdio.h>

int main()
{
    char str[] = "Hello, World!";
    ft_putstr(str);
    return 0;
}*/
