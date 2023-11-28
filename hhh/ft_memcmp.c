/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmalawl <asmalawl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:26:10 by asmalawl          #+#    #+#             */
/*   Updated: 2023/11/23 13:08:52 by asmalawl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*s;
	int				i;

	i = 0;
	a = (unsigned char *)s1;
	s = (unsigned char *)s2;
	while (n > 0)
	{
		if (a[i] != s[i])
			return (a[i] - s[i]);
		i++;
		n--;
	}
	return (0);
}
