/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:35:13 by safamran          #+#    #+#             */
/*   Updated: 2024/11/26 11:18:07 by safamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	s;

	i = 0;
	if (*little == '\0')
		return ((char *) big);
	while (i < len && big[i] != '\0')
	{
		if (big[i] == little[0])
		{
		s = 0;
			while (big[i + s] == little[s] && i + s < len)
			{
			s++;
				if (little[s] == '\0')
					return ((char *) big + i);
			}
		}
	i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char *bg = "dokimarvose";
	char *lit = "doki";
	char *resultat = ft_strnstr(bg, lit, 4);

	if (resultat != NULL)
		printf("Find !!\n");
	else
		printf("Not Find !!!\n%s", resultat);
return (0);
}*/
