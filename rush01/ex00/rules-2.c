/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules-2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosyed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:20:38 by hosyed            #+#    #+#             */
/*   Updated: 2024/08/18 16:42:46 by hosyed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_double(int tab[4][4], int pos, int num);
int	check_col_up(int tab[4][4], int pos, int entry[16]);
int	check_row_right(int tab[4][4], int pos, int entry[16]);
int	check_col_down(int tab[4][4], int pos, int entry[16]);
int	check_row_left(int tab[4][4], int pos, int entry[16]);

int	check_case(int tab[4][4], int pos, int entry[16])
{
	if (check_row_left(tab, pos, entry) == 1)
		return (1);
	if (check_row_right(tab, pos, entry) == 1)
		return (1);
	if (check_col_down(tab, pos, entry) == 1)
		return (1);
	if (check_col_up(tab, pos, entry) == 1)
		return (1);
	return (0);
}
