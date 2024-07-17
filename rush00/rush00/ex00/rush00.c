/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okansira <okansira@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 13:18:28 by okansira          #+#    #+#             */
/*   Updated: 2024/07/07 17:02:05 by okansira         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_line(int length, char start, char middle, char end)
{
	if (length > 0)
		ft_putchar(start);
	while (--length > 1)
		ft_putchar(middle);
	if (length == 1)
		ft_putchar(end);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	current_line;

	if (x < 1 || y < 1)
	{
		write(1, "error\n", 6);
	}
	current_line = y;
	ft_print_line(x, 'o', '-', 'o');
	while (--current_line > 1)
		ft_print_line(x, '|', ' ', '|');
	if (current_line == 1)
		ft_print_line(x, 'o', '-', 'o');
}
