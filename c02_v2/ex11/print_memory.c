#include <unistd.h>

// Function to print a single character
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// Function to print a hexadecimal number
void	ft_puthex(unsigned long num, int digits)
{
	char	*hex = "0123456789abcdef";
	char	buffer[16];
	int		i = digits - 1;

	while (i >= 0)
	{
		buffer[i] = hex[num % 16];
		num /= 16;
		i--;
	}
	write(1, buffer, digits);
}

// Function to check if a character is printable
void	ft_print_char(unsigned char c)
{
	if (c >= 32 && c <= 126)
		ft_putchar(c);
	else
		ft_putchar('.');
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned char	*ptr = (unsigned char *)addr;

	i = 0;
	while (i < size)
	{
		// Print the memory address
		ft_puthex((unsigned long)(ptr + i), 16);
		ft_putchar(':');
		ft_putchar(' ');

		// Print the content in hexadecimal
		j = 0;
		while (j < 16)
		{
			if (i + j < size)
				ft_puthex(ptr[i + j], 2);
			else
				write(1, "  ", 2); // Pad with spaces if fewer than 16 bytes
			if (j % 2)
				ft_putchar(' '); // Add a space every two characters
			j++;
		}

		// Print the content as characters
		j = 0;
		while (j < 16 && i + j < size)
		{
			ft_print_char(ptr[i + j]);
			j++;
		}

		ft_putchar('\n');
		i += 16;
	}
	return addr;
}

int main(void)
{
	char str[] = "Bonjour les aminches\t\n\tc  est fou\ttout\tce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n ";
	ft_print_memory(str, sizeof(str) - 1);
	return 0;
}
