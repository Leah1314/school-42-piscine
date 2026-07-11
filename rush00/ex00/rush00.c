/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumahmed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 15:28:19 by sumahmed          #+#    #+#             */
/*   Updated: 2024/08/11 14:44:16 by skirwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <limits.h>

void	ft_putchar(char c);

void	err_msg(void)
{
	write(1, "Error. Try again\n", 17);
}

void	ft_print_first_line(int current_column, int width)
{
	while (current_column <= width)
	{
		if (current_column == 1)
			ft_putchar('o');
		else if (current_column == width)
			ft_putchar('o');
		else
			ft_putchar('-');
		current_column++;
	}
}

void	ft_print_middle_line(int current_column, int width)
{
	while (current_column <= width)
	{
		if (current_column == 1)
			ft_putchar('|');
		else if (current_column == width)
			ft_putchar('|');
		else
			ft_putchar(' ');
		current_column++;
	}
}

void	ft_print_last_line(int current_column, int width)
{
	while (current_column <= width)
	{
		if (current_column == 1)
			ft_putchar('o');
		else if (current_column == width)
			ft_putchar('o');
		else
			ft_putchar('-');
		current_column++;
	}
}

void	rush(int width, int height)
{
	int	current_column;
	int	current_row;

	current_column = 1;
	current_row = 1;
	if (width <= 0 || height <= 0 || width > 2147483647 || height > 2147483647)
	{
		err_msg();
		return ;
	}
	while (current_row <= height)
	{
		if (current_row == 1)
			ft_print_first_line(current_column, width);
		else if (current_row == height)
			ft_print_last_line(current_column, width);
		else
			ft_print_middle_line(current_column, width);
		ft_putchar('\n');
		current_row++;
		current_column = 1;
	}
}
