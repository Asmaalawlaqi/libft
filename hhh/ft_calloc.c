/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmalawl <asmalawl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:22:30 by asmalawl          #+#    #+#             */
/*   Updated: 2023/11/27 14:06:38 by asmalawl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	totalbytes;

	if (size != 0 && count > UINT32_MAX / size)
		return (NULL);
	totalbytes = size * count;
	ptr = (void *)malloc(totalbytes);
	if (ptr != NULL)
		ft_bzero(ptr, totalbytes);
	return (ptr);
}
