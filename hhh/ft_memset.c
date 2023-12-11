/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmalawl <asmalawl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:22:50 by asmalawl          #+#    #+#             */
/*   Updated: 2023/11/28 13:34:04 by asmalawl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len) 
{
	size_t	i; 
	char	*ab;

	ab = (char *)b;
	i = 0;
	while (i < len)
	{
		ab[i] = c;
		i++;
	}
	return (b);
}
//function fills a block of memory with a specified value byte by byte and returns the original pointer to the memory block.






