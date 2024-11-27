/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:32:51 by safamran          #+#    #+#             */
/*   Updated: 2024/11/18 10:27:18 by safamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*d;

	d = (unsigned char *)b;
	while (len > 0)
	{
	*d = (unsigned char) c;
	d++;
	len--;
	}
	return (b);
}
/*
#include<stdio.h>
int main()
{
	char tab [5] = {0, 1, 2, 3, 4};
	ft_memset(tab, 9, 2);
	int i = 0;
	while(i <= 4)
	{
	printf("%d\n", tab[i]);
	i ++;
	}
return 0;
}*/
