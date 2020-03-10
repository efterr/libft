/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esidame <eseidame@student.42.us.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 12:28:29 by esidame           #+#    #+#             */
/*   Updated: 2020/03/06 12:38:04 by esidame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s1;
	size_t			i;

	i = 0;
	s1 = (unsigned char *)b;
	while (i < len)
	{
		s1[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
