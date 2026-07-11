#include <unistd.h>

void	putchar(char a)
{
	write(1, &a, 1);
}

int	main(void)
{
	putchar('H');
	putchar('e');
	putchar('l');
	putchar('l');
	putchar('o');
	putchar('\n');
	return (0);
}
