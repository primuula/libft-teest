/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 17:08:52 by safamran          #+#    #+#             */
/*   Updated: 2024/11/27 18:19:51 by safamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		a;
	char	*new;
	int		nb;
	long	save;

	nb = n;
	a = 1;
	if (n == -2147483648)
		return ("-2147483648");
	if (n == 0)
		return ("0");
	if (n < 0)
	{
	nb = nb * -1;
	a++;
	}
	save = nb;
	while (save > 9)
	{
		save = save / 10;
	a++;
	}
	new = malloc(sizeof (char) * (a + 1));
	if (!new)
		return (NULL);
	new[a] = '\0';
	while (nb >= 10)
	{
		new[--a] = (nb % 10) + '0';
		nb = nb / 10;
	}
	new[--a] = (nb % 10) + '0';
	if (n < 0)
		new[0] = '-';
	return (new);
}
/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
	write(1, "-", 1);
	nb = nb * - 1;
	}

	if (nb > 9)
		ft_putnbr(nb/10);
	ft_putchar((nb%10) + '0');
}

void	my_putstr(char *str)
{
	int  i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
	i++;
	}
}

int main()
{
	
	my_putstr(ft_itoa(-605));
return (0);
}*/
