/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:33:36 by safamran          #+#    #+#             */
/*   Updated: 2024/11/27 13:00:10 by safamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
size_t	my_strlen(char *str)
{
	size_t c = 0;
	while(str[c] != '\0')
		c++;
return (c);
}

size_t	ft_strlcat (char * dst, const char * src, size_t siz)
{
	size_t	ld;
	size_t	s;
	size_t	drestant;
	size_t	result;

	#define min(a, b) ((a) < (b) ? (a) : (b))
	ld = my_strlen(dst);
	s = 0;
	drestant =  siz - ld  -1;
	if (siz == 0 || ld >= siz)
		return (my_strlen((char *)src) + min(siz, my_strlen(dst)));
	if (drestant >= my_strlen((char *)src))
	{
		while (drestant > 0 && src[s] != '\0')
		{
			dst[ld + s] = src[s];
		s++;
		drestant--;
		}
		dst[ld + s] = '\0';
	}

	result = my_strlen((char *)src) + min(siz, my_strlen(dst));
	return (result);
}
/*
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
	i++;
	}
}
int main()
{
	char *prem = "doki";
	char *deux = "arvose";
	size_t	nb = 11;

	ft_putstr(prem);
	ft_putchar('\n');
	ft_strlcat(prem, deux, nb);
	ft_putstr(prem);
return (0);
}*/
