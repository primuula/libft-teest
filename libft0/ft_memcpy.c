/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:35:21 by safamran          #+#    #+#             */
/*   Updated: 2024/11/25 11:25:09 by safamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dest);
}
/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
	char desti[20];
	char *source = "chloresk";
	int m = 4;
	ft_memcpy(desti, source, 4);
	int a = 0;
	while (a != m)
	{
		ft_putchar(desti[a]);
	a ++;
	}	
return 0;
}*/
