/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sastantua.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/14 10:55:36 by aaugusti      #+#    #+#                 */
/*   Updated: 2019/09/14 12:04:50 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

void	sastantua(int size)
{
	printf("%d\n", calc_bottom_row_len(size));
}
