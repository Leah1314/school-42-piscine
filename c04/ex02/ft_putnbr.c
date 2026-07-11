#include <unistd.h>

void ft_putnbr(int nb)
{
    char c;

    // Handle the special case for the minimum int value
    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        return;
    }

    // If the number is negative, print the minus sign and make it positive
    if (nb < 0)
    {
        write(1, "-", 1);
        nb = -nb;
    }

    // If the number is greater than 9, recursively print the higher digits
    if (nb > 9)
    {
        ft_putnbr(nb / 10);
    }

    // Convert the last digit to a character and print it
    c = nb % 10 + '0';
    write(1, &c, 1);
}

/*int main(void)
{
    ft_putnbr(42);          // Output: 42
    write(1, "\n", 1);
    ft_putnbr(-123456);     // Output: -123456
    write(1, "\n", 1);
    ft_putnbr(0);           // Output: 0
    write(1, "\n", 1);
    ft_putnbr(-2147483648); // Output: -2147483648
    write(1, "\n", 1);
    return 0;
}*/
