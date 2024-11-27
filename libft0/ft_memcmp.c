/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:14:43 by safamran          #+#    #+#             */
/*   Updated: 2024/11/25 17:32:00 by safamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*un;
	unsigned char	*de;
	unsigned int	inc;

	un = (unsigned char *) s1;
	de = (unsigned char *) s2;
	inc = 0;
	while (n > 0)
	{
		if (un[inc] != de[inc])
			return (un[inc] - de[inc]);
	inc++;
	n --;
	}
	return (0);
}
/*
int main()
{

return (0);
}*/
