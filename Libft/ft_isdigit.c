/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:55:14 by safamran          #+#    #+#             */
/*   Updated: 2024/11/12 12:01:07 by safamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	return (c >= 0 && c <= 9);
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
