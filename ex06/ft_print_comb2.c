/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huseo <huseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:13:17 by huseo             #+#    #+#             */
/*   Updated: 2021/10/11 17:52:49 by huseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar1(char c1, char c2, char c3, char c4)
{
	ft_putchar(c1 + '0');
	ft_putchar(c2 + '0');
	ft_putchar(' ');
	ft_putchar(c3 + '0');
	ft_putchar(c4 + '0');

	if (c1 != 9 || c2 != 8 || c3 != 9 || c4 != 9) 
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	i1;
	int	i2;
	int	i3;
	int	i4;

	i1 = 0;
	while (i1 <= 9)
	{
		i2 = 0;
		while (i2 <= 9)
		{
			i3 = i1;
			while(i3 <= 9)
			{
				i4 = i2 + 1;
				while(i4 <= 9)
				{
					ft_putchar1(i1, i2, i3, i4);
					i4++;
				}
				i3++;
			}
			i2++;
		}
		i1++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return 0;
}
