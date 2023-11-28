/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmalawl <asmalawl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:41:46 by asmalawl          #+#    #+#             */
/*   Updated: 2023/11/28 13:34:37 by asmalawl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	uc;
	char			*abc;

	uc = (unsigned char)c;
	abc = NULL;
	while (*s)
	{
		if (*s == uc)
			abc = (char *)s;
		s++;
	}
	if (uc == '\0')
		return ((char *)s);
	return (abc);
}
