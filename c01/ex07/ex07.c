// ft_rev_int_tab.c
void ft_rev_int_tab(int *tab, int size)
{
    int temp;
    int i = 0;

    while (i < size / 2)
    {
        // Swap the i-th element with the (size - 1 - i)-th element
        temp = tab[i];
        tab[i] = tab[size - 1 - i];
        tab[size - 1 - i] = temp;
        i++;
    }
}
#include <stdio.h>

int main()
{
    int tab[] = {1, 2, 3, 4, 5};
    int size = 5;

    ft_rev_int_tab(tab, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);  // Output will be: 5 4 3 2 1
    }

    return 0;
}
