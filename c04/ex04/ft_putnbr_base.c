#include <unistd.h>

// Function to get the length of the base
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

    // Base must have at least 2 characters
    if (ft_strlen(base) < 2)
        return 0;

    // Check for duplicate characters and invalid characters ('+' and '-')
    for (i = 0; base[i] != '\0'; i++)
    {
        if (base[i] == '+' || base[i] == '-')
            return 0;
        for (j = i + 1; base[j] != '\0'; j++)
        {
            if (base[i] == base[j])
                return 0;
        }
    }
    return 1;
}

// Function to recursively convert the number to the given base and print it
void ft_putnbr_base_recursive(int nbr, char *base, int base_len)
{
    char c;

    // Handle negative numbers
    if (nbr < 0)
    {
        write(1, "-", 1);
        if (nbr == -2147483648)  // Special case for INT_MIN
        {
            ft_putnbr_base_recursive(-(nbr / base_len), base, base_len);
            c = base[-(nbr % base_len)];
            write(1, &c, 1);
            return;
        }
        nbr = -nbr;
    }

    // Recursive conversion
    if (nbr >= base_len)
        ft_putnbr_base_recursive(nbr / base_len, base, base_len);

    // Print the corresponding digit in the base
    c = base[nbr % base_len];
    write(1, &c, 1);
}

// Main function to handle the base conversion and print the number
void ft_putnbr_base(int nbr, char *base)
{
    int base_len;

    // Validate the base
    if (!is_valid_base(base))
        return;

    // Get the length of the base
    base_len = ft_strlen(base);

    // Convert and print the number
    ft_putnbr_base_recursive(nbr, base, base_len);
}

/*int main(void)
{
    ft_putnbr_base(42, "0123456789");        // Output: 42
    write(1, "\n", 1);
    ft_putnbr_base(-42, "0123456789ABCDEF"); // Output: -2A
    write(1, "\n", 1);
    ft_putnbr_base(255, "01");               // Output: 11111111
    write(1, "\n", 1);
    ft_putnbr_base(-2147483648, "0123456789"); // Output: -2147483648
    write(1, "\n", 1);
    ft_putnbr_base(123456, "poneyvif");      // Output: ifv
    write(1, "\n", 1);
    return 0;
}*/
