/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:32:45 by safamran          #+#    #+#             */
/*   Updated: 2024/11/25 11:26:04 by safamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*new;

	new = malloc(size * nmemb);
	if (!new)
		return (NULL);
	ft_memset(new, 0, (nmemb * size));
	return (new);
}
/*
int main()
{
return (0);
}*/
