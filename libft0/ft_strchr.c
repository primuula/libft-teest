/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:26:07 by safamran          #+#    #+#             */
/*   Updated: 2024/11/25 11:54:12 by safamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *) str + i);
	i++;
	}
	if (c == '\0')
		return ((char *) str + i);
	return (0);
}
/*
#include<unistd.h>
void	ft_puthcar(char c)
{
	write(1, &c, 1);
}
int main()
{
	char *test = "saluuut toi";
	ft_strchr(test, 127);
return 0;
}*/
