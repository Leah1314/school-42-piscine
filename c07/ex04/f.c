#include <stdlib.h>

// Helper function to calculate the length of a string
int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}

// Function to check if a base is valid
int is_valid_base(char *base)
{
    int i, j;

    if (ft_strlen(base) < 2)
        return 0;
    for (i = 0; base[i] != '\0'; i++)
    {
        if (base[i] == '+' || base[i] == '-' || base[i] <= ' ' || base[i] == '\t')
            return 0;
        for (j = i + 1; base[j] != '\0'; j++)
        {
            if (base[i] == base[j])
                return 0;
        }
    }
    return 1;
}

// Function to find the index of a character in a base
int base_index(char c, char *base)
{
    int i = 0;
    while (base[i] != '\0')
    {
        if (base[i] == c)
            return i;
        i++;
    }
    return -1;
}

// Function to convert a number string from base_from to an integer
int ft_atoi_base(char *str, char *base_from)
{
    int i = 0;
    int sign = 1;
    int result = 0;
    int base_len = ft_strlen(base_from);

    // Handle leading whitespaces
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
        i++;

    // Handle signs
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }

    // Convert to integer
    int base_pos;
    while ((base_pos = base_index(str[i], base_from)) != -1)
    {
        result = result * base_len + base_pos;
        i++;
    }

    return result * sign;
}

// Function to convert an integer to a string in base_to
char *ft_itoa_base(int nbr, char *base_to)
{
    int base_len = ft_strlen(base_to);
    char *result;
    int temp = nbr;
    int sign = nbr < 0 ? 1 : 0;
    int len = sign ? 2 : 1;

    // Calculate the length of the resulting string
    while (temp /= base_len)
        len++;

    result = (char *)malloc(len + 1);
    if (!result)
        return NULL;

    result[len] = '\0';
    if (nbr < 0)
        nbr = -nbr;

    while (len > sign)
    {
        result[--len] = base_to[nbr % base_len];
        nbr /= base_len;
    }
    if (sign)
        result[0] = '-';

    return result;
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    int number;
    char *result;

    // Validate the bases
    if (!is_valid_base(base_from) || !is_valid_base(base_to))
        return NULL;

    // Convert the number from base_from to an integer
    number = ft_atoi_base(nbr, base_from);

    // Convert the integer to base_to as a string
    result = ft_itoa_base(number, base_to);

    return result;
}

#include <stdio.h>
#include <stdlib.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int main(void)
{
    char *result;

    result = ft_convert_base("1010", "01", "0123456789ABCDEF");
    if (result != NULL)
    {
        printf("Converted number: %s\n", result);  // Expected Output: "A"
        free(result);
    }

    result = ft_convert_base("FF", "0123456789ABCDEF", "01234567");
    if (result != NULL)
    {
        printf("Converted number: %s\n", result);  // Expected Output: "377"
        free(result);
    }

    return 0;
}
