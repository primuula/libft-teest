/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:47:16 by safamran          #+#    #+#             */
/*   Updated: 2024/11/26 13:23:08 by safamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	sstrlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*n;
	int		jj;

	if (sstrlen(s) < start)
		return (malloc(sizeof (char) * 1));
	n = malloc(sizeof (char) * (len + 1));
	if (!n)
		return (0);
	jj = 0;
	while (len > 0)
	{
	n[jj] = s[start];
	start++;
	jj++;
	len--;
	}
	n[jj] = '\0';
	return (n);
}
/*
int main()
{
	char *test = "safilouuu";
	ft_substr(test, 2, 3);
	int p = 0;
return (0);
}*/
