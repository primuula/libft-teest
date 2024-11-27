/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:39:27 by safamran          #+#    #+#             */
/*   Updated: 2024/11/26 12:08:40 by safamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (d < s || d >= s + n)
	{
		while (n > 0)
		{
			*d = *s;
		d++;
		s++;
		n--;
		}
	}
	else
	{
		d += n -1;
		s += n -1;
		while (n--)
			*(d--) = *(s--);
	}
	return (dest);
}
/*
int main()
{

retrun 0;
}*/
