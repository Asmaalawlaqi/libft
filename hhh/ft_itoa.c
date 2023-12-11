/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmalawl <asmalawl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:51:32 by asmalawl          #+#    #+#             */
/*   Updated: 2023/11/27 13:07:29 by asmalawl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// from integer to string//
#include "libft.h"

static unsigned int	ft_len(int n)
{
	unsigned int	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	unsigned int	len;
	char			*ptr;
	int				i;

	if (n == -2147483648)    //The function handles negative numbers and has a special case for the minimum possible integer value (-2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_len(n);      //If n is the minimum possible integer value, it returns a duplicated string 
	ptr = (char *)malloc((len + 1) * sizeof(char));    //Allocates memory for the string (ptr) including space for the null terminator.
	if (ptr == NULL)
		return (NULL);           //If ptr is NULL, it means the allocation failed, likely due to insufficient memory.
	ptr[len] = '\0';
	if (n < 0)       //If n is negative, the code inside the curly braces is executed
	{
		ptr[0] = '-';    //Sets the first character of the string (ptr) to the minus sign ('-').
		n = -n;
	}           //he input integer n to its absolute value, ensuring subsequent processing in the conversion to a string representation works with a non-negative value.
	i = len - 1;    // remove the null thing 
	while (n >= 10)//iteration for further processing in the integer-to-string conversion.
	{
		ptr[i] = ('0' + (n % 10));   // Converts the last digit of n to its character representation and stores it at the current index i in the string.
		n = n / 10;         // Removes the last digit from n by performing integer division by 10.
		i--;    //Decrements the index 
	}
	ptr[i] = (n + '0');  //Converts the last remaining digit of n to its character 
	return (ptr);   //Returns the pointer to the fully constructed string.
}

