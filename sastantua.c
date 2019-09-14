/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sastantua.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/14 10:55:36 by aaugusti      #+#    #+#                 */
/*   Updated: 2019/09/14 12:45:37 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_putchar(char c);

int		calc_bottom_row_len(int size)
{
	int res;
	int n;
	int r;

	res = 0;
	n = 1;
	r = 0;
	while (n <= size)
	{
		res += 3;
		if (n > 1)
			res += 3;
		r = 0;
		while (r < n + 1)
		{
			res += 2;
			r++;
		}
		n++;
	}
	return (res);
}

void	print_row(int row_length, int spacing)
{
	int i;

	i = spacing;
	while (i > 0)
	{
		ft_putchar(' ');
		i--;
	}
	ft_putchar('/');
	i = row_length - 2;
	while (i > 0)
	{
		ft_putchar('*');
		i--;
	}
	ft_putchar('\\');
	ft_putchar('\n');
}

void	print_slice(int n, int bottom_row_length)
{
	int top_row_length;
	int outer_spacing;
	int counter;
	int current_row_length;

	counter = 0;
	top_row_length = (n > 1) ? calc_bottom_row_len(n - 1) + 6 : 3;
	while (counter < n + 2)
	{
		current_row_length = top_row_length + counter * 2;
		outer_spacing = (bottom_row_length - current_row_length) / 2;
		print_row(current_row_length, outer_spacing);
		counter++;
	}

}

void	sastantua(int size)
{
	int bottom_row_length;
	int n;

	bottom_row_length = calc_bottom_row_len(size);
	n = 1;
	while (n <= size)
	{
		print_slice(n, bottom_row_length);
		n++;
	}
}
