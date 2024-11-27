/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 12:06:48 by safamran          #+#    #+#             */
/*   Updated: 2024/11/25 11:30:24 by safamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*h;

	h = (const char *)s;
	while (n > 0)
	{
		if (*h == c)
			return ((void *)h);
	h++;
	n--;
	}
	return (0);
}
/*
int main()
{

return (0);
}*/
