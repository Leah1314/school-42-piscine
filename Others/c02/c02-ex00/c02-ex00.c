// ft_strcpy.c
char *ft_strcpy(char *dest, char *src)
{
    int i = 0;

    // Copy each character from src to dest, including the null terminator
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    
    // Don't forget to copy the null terminator
    dest[i] = '\0';

    // Return the destination pointer
    return dest;
}
/*#include <stdio.h>

int main()
{
    char src[] = "Hello, World!";
    char dest[50];  // Ensure the destination has enough space

    ft_strcpy(dest, src);

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0;
}*/
