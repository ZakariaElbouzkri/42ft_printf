/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:33:24 by zel-bouz          #+#    #+#             */
/*   Updated: 2022/11/04 19:16:41 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int n, int fd)
{
	int	len;

	len = 0;
	if (n < 10)
		len += ft_putchar_fd(n + 48, fd);
	else
	{
		len += ft_putunbr((n / 10), fd);
		len += ft_putunbr((n % 10), fd);
	}
	return (len);
}
