/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 08:30:05 by safamran          #+#    #+#             */
/*   Updated: 2024/11/19 09:01:42 by safamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
	ft_putchar('-');
	n = n*-1;
	}

	if (n > 9)
		ft_putnbr_fd(n/10, fd);
	ft_putchar((n%10) + '0');
}
/*
int main()
{
	ft_putnbr_fd(46, 1);
return 0;
}*/
