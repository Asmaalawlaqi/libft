/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmalawl <asmalawl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:21:30 by asmalawl          #+#    #+#             */
/*   Updated: 2023/11/28 13:34:21 by asmalawl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	t_len;
	char	*res;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	t_len = len1 + len2;
	res = malloc(sizeof(char) * (t_len + 1));
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, s1, t_len + 1);
	ft_strlcat(res, s2, t_len + 1);
	return (res);
}
