// ft_strncpy.c
char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i = 0;

    // Copy each character from src to dest until n characters or null terminator is reached
    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    
    // If we haven't reached n characters, pad the rest of dest with '\0'
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }

    // Return the destination pointer
    return dest;
}
/*#include <stdio.h>

int main()
{
    char src[] = "Hello";
    char dest[10];  // Ensure the destination has enough space

    ft_strncpy(dest, src, 8);  // Copying 8 characters (including null-padding)

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0;
}*/
