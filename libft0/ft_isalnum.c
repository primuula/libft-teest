/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:01:45 by safamran          #+#    #+#             */
/*   Updated: 2024/11/22 15:18:33 by safamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z' ) || (c >= 'a' && c <= 'z'))
		return (1);
	if (c >= 0 && c <= 9)
		return (1);
	return (0);
}
/*
#include<unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int main()
{
	int a = 'A';
	ft_putchar(ft_isalnum(a) + '0');
return 0;
}*/
