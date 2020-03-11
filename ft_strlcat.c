/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseidame <eseidame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 09:39:46 by eseidame          #+#    #+#             */
/*   Updated: 2020/03/10 19:54:43 by eseidame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t len;

	len = ft_strlen(dst);
	if (dstsize > len)
		ft_strncat(dst, src, (dstsize - len - 1));
	if (dstsize < len)
		return (dstsize + ft_strlen((char *)src));
	return (len + ft_strlen((char *)src));
}
