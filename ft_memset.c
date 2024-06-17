/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaurer <fmaurer42@posteo.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 10:29:27 by fmaurer           #+#    #+#             */
/*   Updated: 2024/06/10 09:20:15 by fmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// TODO: does it have to unsigned char ?!?! RTFM!
// T
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*byte_s;

	byte_s = (char *) s;
	i = 0;
	if (s == NULL)
		return (NULL);
	while (i < n)
	{
		byte_s[i] = c;
		i++;
	}
	return (s);
}
