/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:17:44 by safamran          #+#    #+#             */
/*   Updated: 2024/11/18 10:22:49 by safamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

void	*ft_bzero(void	*s, size_t len)
{
	unsigned char	*t;

	t = (unsigned char *)s;
	while (len > 0)
	{
	*t = 0;
	len--;
	t++;
	}
	return (s);
}
/*
#include<stdio.h>
int main()
{
	char tab[8] = {9, 1, 2, 3, 4, 5, 6, 7};
	ft_bzero(tab, 7);
	int i = 0;
	while(i <= 7)
	{
	printf("%d\n", tab[i]);
	i++;;
	}
return 0;
}*/
