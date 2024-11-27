/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:46:21 by safamran          #+#    #+#             */
/*   Updated: 2024/11/22 14:52:52 by safamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/*
#include<unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int main()
{
	char *test = "spe !";
	ft_putchar(ft_strlen(test) + '0');
return 0;
}*/
