/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsogut <zsogut@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 12:04:41 by zsogut            #+#    #+#             */
/*   Updated: 2024/07/16 12:15:17 by zsogut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

int	main()
{
	int a = 13;
	int b = 2;
	int *div;
	int *mod;
	
	div = &a;
	mod = &b;
	ft_div_mod(a, b, div, mod);
	printf("div:%d mod:%d", *div, *mod);
	return(0);
}