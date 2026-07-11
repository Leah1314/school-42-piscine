// ft_div_mod.c
void ft_div_mod(int a, int b, int *div, int *mod)
{
    if (b != 0)  // Check to avoid division by zero
    {
        *div = a / b;
        *mod = a % b;
    }
}
/*#include <stdio.h>

int main()
{
    int a = 10;
    int b = 3;
    int div;
    int mod;

    ft_div_mod(a, b, &div, &mod);

    printf("Division result: %d\n", div);  // Output will be 3
    printf("Remainder: %d\n", mod);        // Output will be 1

    return 0;
}*/
