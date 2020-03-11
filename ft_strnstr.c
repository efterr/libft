/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseidame <eseidame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 09:44:14 by eseidame          #+#    #+#             */
/*   Updated: 2020/03/10 19:55:55 by eseidame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	char	*result;

	result = (char *)haystack;
	needle_len = ft_strlen((char *)needle);
	if (!needle_len)
		return ((char *)result);
	while (*result && len-- >= needle_len)
	{
		if (*result == *needle)
			if (ft_strncmp(needle, result, needle_len) == 0)
				return (result);
		result++;
	}
	return (NULL);
}
