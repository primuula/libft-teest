/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 09:03:47 by safamran          #+#    #+#             */
/*   Updated: 2024/11/21 12:59:58 by safamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
int	ft_atoi(const char *nptr)
{
	int	i;
	int	signe;
	int	result;
	
	result = 0;
	signe = 1;
	i = 0;
	while (nptr[i] >= 9 && nptr[i] <= 13 || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-')
	{
		signe = signe * -1;
		i ++;
	}
	
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
	result = result * 10 + (nptr[i] - '0');
	i++;
	}
	return (signe * result);
}

#include<stdlib.h>
#include<unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
	nb = nb *-1;
	ft_putchar('-');
	}

	if (nb > 9)
		ft_putnbr(nb/10);
	ft_putchar((nb%10) + '0');

}
int main()
{
	char *test = "   	-98665";
	ft_putnbr(atoi(test));
	ft_putchar('\n');
	ft_putnbr(ft_atoi(test));
return 0;
}*/
