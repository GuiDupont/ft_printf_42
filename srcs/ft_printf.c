/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 19:04:38 by user42            #+#    #+#             */
/*   Updated: 2020/05/03 23:22:03 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftprintf.h"

int	ft_printf(char const *str, ...)
{
	int		i;
	va_list	arg;

	if (!str)
		return (0);
	va_start(arg, str);
	PFT = 0;
	i = 0;
	
	while (str[i])
	{
		if (str[i] == '%' && conf_is_valid(&str[i]))
			i += valid_conf(&str[i], &arg);
		else if (str[i] == '%')
			i += no_conf(&str[i]);
		else
			i += print_single_char(str[i]);
	}
	va_end(arg);
	return (PFT);
}