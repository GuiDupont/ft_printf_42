/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printing_d_i_u.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 23:27:01 by user42            #+#    #+#             */
/*   Updated: 2020/05/03 21:34:10 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftprintf.h"

void	ft_print_d_i_not_align(t_conf *conf, int neg, int str_len, char fill)
{
	int dot;

	dot = conf->dot;
	(conf->neg && !dot && fill == '0') ? ft_putchar('-') : 0;
	ft_putchar_nb(fill, conf->width - conf->precis - neg);
	(conf->neg && (fill == ' ' || dot)) ? ft_putchar('-') : 0;
	ft_putchar_nb('0', conf->precis - str_len);
	ft_putstr(conf->str);
}

int		ft_print_d_i(t_conf *conf)
{
	char	fill;
	int		str_len;
	int		neg;

	fill = (conf->zero && !conf->dot) ? '0' : ' ';
	neg = conf->neg;
	if (conf->str[0] == '0' && !conf->precis && conf->dot)
		conf->str[0] = '\0';
	str_len = ft_strlen(conf->str);
	conf->precis = (conf->precis <= str_len) ? str_len : conf->precis;
	if (conf->l_align == 1)
	{
		(conf->neg == 1) ? ft_putchar('-') : 0;
		ft_putchar_nb('0', conf->precis - str_len);
		ft_putstr(conf->str);
		ft_putchar_nb(fill, conf->width - conf->precis - neg);
	}
	else
		ft_print_d_i_not_align(conf, neg, str_len, fill);
	free(conf->str);
	PFT += (conf->precis < conf->width) ? conf->width : conf->precis + neg;
	return ((conf->precis < conf->width) ? conf->width : conf->precis + neg);
}

int	ft_print_u(t_conf *conf)
{
	char	fill;
	int		str_len;

	fill = (conf->zero == 1 && !conf->dot) ? '0' : ' ';
	if (conf->str[0] == '0' && conf->precis == 0 && conf->dot)
		conf->str[0] = '\0';
	str_len = ft_strlen(conf->str);
	conf->precis = (conf->precis <= str_len) ? str_len : conf->precis;
	if (conf->l_align)
	{
		ft_putchar_nb('0', conf->precis - str_len);
		ft_putstr(conf->str);
		ft_putchar_nb(fill, conf->width - conf->precis);
	}
	else
	{
		ft_putchar_nb(fill, conf->width - conf->precis);
		ft_putchar_nb('0', conf->precis - str_len);
		ft_putstr(conf->str);
	}
	free(conf->str);
	PFT += (conf->precis < conf->width) ? conf->width : conf->precis;
	return ((conf->precis < conf->width) ? conf->width : conf->precis);
}
