/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:47:16 by safamran          #+#    #+#             */
/*   Updated: 2024/11/21 14:57:03 by safamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include<stdio.h>
#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newl;

	int			j;

	newl = malloc(sizeof (char) * (len + 1));
	if (ft_strlen(s) < start)
		return ('\0');
	j = 0;
	while (len > 0)
	{
	newl[start] = s[start];
	start++;
	j++;
	len--;
	}
	newl[j] = '\0';
	return (newl);
}

int main()
{
	char *test = "safilouuu";
	ft_substr(test, 2, 3);
	int p = 0;
return (0);
}*/
