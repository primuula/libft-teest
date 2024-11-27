/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:51:46 by safamran          #+#    #+#             */
/*   Updated: 2024/11/12 15:14:23 by safamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
/*
#include<unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int main()
{
	int a = 'H';
	ft_putchar(ft_toupper(a));
return 0;
}*/
