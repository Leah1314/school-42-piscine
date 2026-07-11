#include <unistd.h>

void ft_putstr(char *str)
{
    int i = 0;

    // Iterate through the string and print each character using write
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}

/*int main(void)
{
    ft_putstr("Hello, World!\n");
    return 0;
}*/
