/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfurst <nfurst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 11:11:57 by nfurst            #+#    #+#             */
/*   Updated: 2026/06/29 11:23:36 by nfurst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*ptr;

	ptr = dest;
	while (*ptr != '\0')
	{
		ptr++;
	}
	while (nb > 0 && *src != '\0')
	{
		*ptr++ = *src++;
		nb--;
	}
	*ptr = '\0';
	return (dest);
}
