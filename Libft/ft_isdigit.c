/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:55:14 by safamran          #+#    #+#             */
/*   Updated: 2024/11/21 16:24:12 by safamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{	
	
	if (!(c >= 0 && c <= 9))
		return (0);
	return (1);
}
/*
#include<unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
	int a = 9;
	ft_putchar(ft_isdigit(a) + '0');
return 0;
}*/
