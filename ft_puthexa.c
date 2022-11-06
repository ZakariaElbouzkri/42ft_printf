/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:54:35 by zel-bouz          #+#    #+#             */
/*   Updated: 2022/11/04 20:24:44 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned long n, int fd, char c)
{
	char	str[16];
	int		len;

	len = 0;
	if (c == 'x')
		ft_memcpy(str, "0123456789abcdef", 17);
	else
		ft_memcpy(str, "0123456789ABCDEF", 17);
	if (n < 16)
		len += ft_putchar_fd(str[n], fd);
	else
	{
		len += ft_puthexa(n / 16, fd, c);
		len += ft_puthexa(n % 16, fd, c);
	}
	return (len);
}
