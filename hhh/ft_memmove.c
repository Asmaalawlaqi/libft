/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmalawl <asmalawl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:21:30 by asmalawl          #+#    #+#             */
/*   Updated: 2023/11/07 13:07:58 by asmalawl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char		*dest1;
	const unsigned char	*src1;

	dest1 = (unsigned char *)dest;
	src1 = (const unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (dest1 < src1)
	{
		while (len--)
			*dest1++ = *src1++;
	}
	else if (dest > src)
	{
		dest1 = dest1 + len;
		src1 = src1 + len;
		while (len--)
			*(--dest1) = *(--src1);
	}
	return (dest);
}
