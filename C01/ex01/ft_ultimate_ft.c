/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsogut <zsogut@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 15:51:21 by zsogut            #+#    #+#             */
/*   Updated: 2024/07/16 12:01:31 by zsogut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

 void ft_ultimate_ft(int *********nbr)
 {
	*********nbr = 42;
}

int	main()
{
	int	n;
	int	*nbr8;
	int	**nbr7;
	int	***nbr6;
	int	****nbr5;
	int	*****nbr4;
	int	******nbr3;
	int	*******nbr2;
	int	********nbr1;
	int	*********nbr;

	n = 21;

	nbr8 = &n;
	nbr7 = &nbr8;
	nbr6 = &nbr7;
	nbr5 = &nbr6;
	nbr4 = &nbr5;
	nbr3 = &nbr4;
	nbr2 = &nbr3;
	nbr1 = &nbr2;
	nbr = &nbr1;
	
	ft_ultimate_ft(nbr);
	printf("%d", n);	
	return 0;
}