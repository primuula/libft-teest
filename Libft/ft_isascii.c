/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:23:26 by safamran          #+#    #+#             */
/*   Updated: 2024/11/12 12:30:20 by safamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
#include<unistd.h>
void	ft_putchar(char c)
{
	write(1, &c ,1);
}
int main()
{
	int a = 'a';
	ft_putchar(ft_isascii(a) + '0');
return 0;
}*/
