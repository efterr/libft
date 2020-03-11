/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseidame <eseidame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 09:48:20 by eseidame          #+#    #+#             */
/*   Updated: 2020/03/10 19:57:57 by eseidame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		len;
	char	*result;

	result = (char *)haystack;
	len = ft_strlen((char *)needle);
	if (!len)
		return ((char *)result);
	while (*result)
	{
		if (*result == *needle)
			if (ft_strncmp(needle, result, len) == 0)
				return (result);
		result++;
	}
	return (NULL);
}
