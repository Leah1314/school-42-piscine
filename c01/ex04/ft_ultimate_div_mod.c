// ft_ultimate_div_mod.c
void ft_ultimate_div_mod(int *a, int *b)
{
    if (*b != 0)  // Check to avoid division by zero
    {
        int temp_a = *a;  // Store the value of *a in a temporary variable
        *a = *a / *b;     // Store the result of the division in *a
        *b = temp_a % *b; // Store the remainder in *b
    }
}
/*#include <stdio.h>

int main()
{
    int a = 10;
    int b = 3;

    ft_ultimate_div_mod(&a, &b);

    printf("Division result: %d\n", a);  // Output will be 3
    printf("Remainder: %d\n", b);        // Output will be 1

    return 0;
}*/
