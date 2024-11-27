/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:40:39 by safamran          #+#    #+#             */
/*   Updated: 2024/11/25 12:03:08 by safamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t siz)
{
	unsigned char	*s;
	unsigned char	*d;

	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	if (siz == 0)
		return (ft_strlen(src));
	if (*s == '\0')
	{
		*d = '\0';
		return (ft_strlen(src));
	}
	while (siz > 1)
	{
		*d = *s;
	d++;
	s++;
	siz--;
	}
	*d = '\0';
	return (ft_strlen(src));
}
/*
int main()
{
	
return (0);
}*/
