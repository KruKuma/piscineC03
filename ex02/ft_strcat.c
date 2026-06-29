/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfurst <nfurst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 10:22:10 by nfurst            #+#    #+#             */
/*   Updated: 2026/06/29 10:56:16 by nfurst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;
	
	ptr = dest;
	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}

/*
int main(void)
{
	char	str[] = "Append a string to an empty string";

	ft_strcat(str, "Hello");
	printf("%s", str);
	return (0);
}
*/