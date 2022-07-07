/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 12:23:22 by gialexan          #+#    #+#             */
/*   Updated: 2022/04/21 22:43:17 by gialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int i, int j, int k)
{
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &k, 1);
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{	
			k = j + 1;
			while (k <= '9')
			{	
				ft_putchar(i, j, k);
				if (i != '7' || j != '8' || k != '9')
				{
					write(1, ", ", 2);
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
